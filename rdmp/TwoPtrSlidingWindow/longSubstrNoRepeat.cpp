 /*Our unoptimised algorithm(TC- O(n^2)  SC- O(256)) for the interview can be to use a hash array of size 256 inialised with 0. Then iterate through all the possible subarrays and then check if the element has been repeated
 by taking the reference of hasharray for past occurences. If it repeats, break.
 
 Optimised Solution: TC- O(n)  */
  class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set < int > set;
        int l = 0;
        int maxans = INT_MIN;
        if(s.length() ==0)
        {
            return 0;
        }
        for (int r = 0; r < s.length(); r++) // outer loop for traversing the string
        {
            if (set.find(s[r]) != set.end()) //if duplicate element is found
         {
             while (l < r && set.find(s[r]) != set.end()) {
              set.erase(s[l]);
              l++;
             }
         }
         set.insert(s[r]);
         maxans = max(maxans, r - l + 1);
         }
        return maxans;
    }
};

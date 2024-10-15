//To do this in O(nlog(n)) TC and O(1) SC, we can simply sort the array and check the number which doesnt match to its prev number.
// I have used unordered map to solve this. Just store the frequency of each number in the form of key-value pairs and check which key has its value as 1.
class Solution {
public:
    bool compareByValue(const std::pair<int, int>& a, const std::pair<int, int>& b) {
    return a.second < b.second;  // Compare based on the values
    }
    int singleNumber(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(auto i = 0 ; i<nums.size() ; i++)
        {
            mp[nums[i]]++;
            
        }
        for(auto i = mp.begin() ; i != mp.end() ; i++)
        {
            if(i->second==1)
            {
                return i->first;
            }
        }
        return -1;
    }
};

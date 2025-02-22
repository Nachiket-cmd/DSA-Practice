/*This question is similar to the 2. Missing number. The difference is that, in this we have multiple missing numbers. So, we cannot figure out the missing
number by using the old logic(sum of n integers).

Logic 1: TC - O(n) SC - O(n)
We can use an unordered set and push the elements inside the set. As the set only appends unique elements, all the duplicates will be omitted. Now,
we can simply iterate through the set from 1 to size of array and check which element is missing.

Logic 2: TC - O(n) SC - O(1)
Pending
*/

//Logic 1: 
class Solution {
    public:
        vector<int> findDisappearedNumbers(vector<int>& nums) {
          unordered_set<int>s;
          for(int i=0 ; i<nums.size(); i++)
          {
            s.insert(nums[i]);
          }  
          vector<int>ans;
          for(int i=1 ; i<nums.size()+1; i++)
          {
            if(s.find(i)==s.end())
            {
                ans.push_back(i);
            }
          }
          return ans;
        }
    };


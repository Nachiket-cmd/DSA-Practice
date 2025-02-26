//Leetcode problem no: 1

/*Solution 1: Done by me 
The reason that we are starting with an empty hash map and not populating it on the start is because if we do, we might even use the same number twice.
*/
class Solution {
    public:
        vector<int> twoSum(vector<int>& nums, int target) {
            unordered_map<int,int>res;
            for(int i=0; i <nums.size(); i++)
            {
                int check = target - nums[i];
                if(res.count(check))
                {
                   return {res[check],i};
                }
                res[nums[i]] = i;
            }
          return {};
        }
    };

//Leetcode problem no: 1

/*Solution 1: Done by me */
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

/* My logic 
Using Hashmap (TC- O(n) SC- O(n))
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

/* Neetcode Logic 
Similar logic.
*/

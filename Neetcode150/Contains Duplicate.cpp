//My solution. TC- O(n) SC-O(n)
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int>res;
        for(int i=0;i<nums.size();i++)
        {
            if(res.find(nums[i])!=res.end())
            {
                return true;
            }
            res.insert(nums[i]);
        }
        return false;
    }
};

//Neetcode Logic
//His logic and mine were the same 

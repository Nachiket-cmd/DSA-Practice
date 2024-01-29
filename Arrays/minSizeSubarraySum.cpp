class Solution {
    public:
      int minSubArrayLen(int target, vector<int>& nums)
      {
        
      }
class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
      int left=0;
      int mini=INT_MAX;
      int sum=0;
      int right=0;

      while(right<nums.size())
      {
          if ((sum + nums[right]) < target)
          {
             sum = sum + nums[right];
             right++;
          }
         else
          {
              mini = min (mini, abs(right-left + 1));
              sum = sum - nums[left];
              left++; 
              
          }
      }
        if(mini == INT_MAX)
        {
          return 0;
        }
         return mini;
}
};
//We will use sliding window in this question.
/*Left and right will start from 0. Right will traverse ahead adding the numbers to sum(0). 
When the sum becomes greater than or equal to target, we will replace min with that number of subarray element.At last,we will return the min.*/
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

//Leetcode : 1004
class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int maxSize = 0;
        int l = 0;
        int r = 0;
        int n = nums.size();
        int flag = k;
        while(r<n)
        {
            while(nums[r]==0 && flag==0)
            {
                if(nums[l]==0)
                {
                    flag++;
                }
                l++;
            }
            if(nums[r]==1)
            {
                maxSize = max(maxSize,(r-l+1));
                r++;
            }
            else if(nums[r]==0 && flag>0)
            {
                flag--;
                maxSize = max(maxSize,(r-l+1));
                r++;
            }
        }
        return maxSize;
    }
};

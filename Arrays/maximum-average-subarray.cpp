//keep in mind that i is the leading index not the trailing 
class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int check=0;
        double currAvg=0;
        double maxAvg=-31432;
        int n = nums.size();
        for(int i=0;i<n;i++)
        {
            currAvg+=nums[i];
            check=check+1;
            if(check==k)
            {
                double Average = currAvg/k;
                if(Average>maxAvg)
                {
                   maxAvg = Average;
                }
                check--;
                currAvg = currAvg - nums[i-k+1];
            }
        }
        return maxAvg;
    }
};

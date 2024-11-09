/*You are given an array and the condition is that you can only take the elements from the left side and right side but not from the middle of the array. By doing this we are looking the max sum with a given window size k*/


//This one did not worked
class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
       int lsum = 0 ,rsum = 0;
       int lindex = 0;
       for(int i=0 ; i<k ; i++)
        {
            lsum = lsum + cardPoints[i];
            lindex++;
        }
        int maxSum = lsum;
        int rindex = cardPoints.size() - 1;
        while(lindex>=0)
        {
            lsum = lsum - cardPoints[lindex];
            lindex--;
            rsum = rsum + cardPoints[rindex];
            rindex--;
            maxSum = max(maxSum , (lsum+rsum));
            if(lindex==0)break;
        } 
        return maxSum;
    }
};

//And this one did worked
class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
       int lsum = 0 ,rsum = 0;
       int lindex = 0;
       for(int i=0 ; i<k ; i++)
        {
            lsum = lsum + cardPoints[i];
            lindex++;
        }
        int maxSum = lsum;
        int rindex = cardPoints.size() - 1;
        for(int i=k-1;i>=0;i--)
        {
            lsum -= cardPoints[i];
            lindex--;
            rsum += cardPoints[rindex];
            rindex--;
            maxSum = max(maxSum,(lsum+rsum));
        }
        return maxSum;
    }
};

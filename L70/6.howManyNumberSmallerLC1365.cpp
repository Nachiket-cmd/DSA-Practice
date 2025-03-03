/*Given the array nums, for each nums[i] find out how many numbers in the array are smaller than it. That is, for each nums[i] you have to count the number of valid j's such that j != i and nums[j] < nums[i].

Return the answer in an array.

*/
//I couldnt think of any solution to this. 

//Video Solution. TC - O(nlogn) SC - O(n)
class Solution {
    public :
      vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int>ans;
        unordered_map<int,int>arr;
        vector<int>temp = sort(nums.begin(),nums.end());
        for(int i=0 ; i<nums.size(); i++)
        {
            if(arr.find(temp[i])==arr.end())
            {
                arr[temp[i]] = i;
            }
        }
        for(int i = 0 ; i<nums.size(); i++)
        {
            if(arr.find(nums[i])!= arr.end())
            {
              ans.push_back(arr[nums[i]]);
            }
        }
        return ans;
      }
}


//the solution which i found is the best. TC - O(n)
class Solution {
  public:
      vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
          vector<int>temp(nums.begin(),nums.end());
          sort(temp.begin(),temp.end());
          unordered_map<int,int>ans;
          for(int i=0 ; i<nums.size(); i++)
          {
              if(ans.find(temp[i]) == ans.end())
              {
                  ans[temp[i]]= i;
              }
          }
          vector<int>x;
          for(int i=0 ; i<nums.size(); i++)
          {
              x.push_back(ans[nums[i]]);
          }
          return x;
      }
  };
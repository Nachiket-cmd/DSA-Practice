//Solution using two pointers.
#include<vector>
#include<unordered_set>
using namespace std;
vector<int> twoNumberSum(vector<int>array, int targetSum)
{
  sort(array.begin(),array.end());
  vector<int>ans;
  int l=0;
  int r=array.size()-1;
  while(l<r)
    {
      int tempSum=array[l] + array[r];
      if(tempSum == targetSum)
      {
        ans.push_back(array[l]);
        ans.push_back(array[r]);
        return ans;
        break;
      }
      if(tempSum < targetSum)
      {
        l++;
      }
      if(tempSum > targetSum)
      {
        r--;
      }
    }
  return {};
}

//More Optimized solution using unordered map/hash map which is more optimized.

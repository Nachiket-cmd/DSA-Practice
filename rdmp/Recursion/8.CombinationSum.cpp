#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> combinationSum(int index, vector<int>arr, vector<int>subs, vector<vector<int>>ans, int target)
{
    if(index == arr.size())
    {
        if(target == 0)
        {
            ans.push(subs);
        }
        return;
    }

    if(arr[index]<=target)
    {
        subs.push_back(arr[index]);
        combinationSum(index,arr,subs,ans,target-arr[index]);
    }
    else {
        subs.pop_back();
        combinationSum(index+1,arr,subs,ans,target+arr[index]);
    }

}

int main() {
 vector<vector<int>>ans;
 vector<int>subs;
 vector<int>arr = {2,3,6,7};
 ans = combinationSum(0,arr,subs,ans,7);
 for(auto i:ans)
  {
    cout<<i;
  }
  return 0;
}
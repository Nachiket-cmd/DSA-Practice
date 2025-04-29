#include<bits/stdc++.h>
using namespace std;

void combinationSum(int index, vector<int>arr, vector<int>subs, vector<vector<int>>ans,int target)
{
    if(index == arr.size() || target < 0)
    {
        if(target == 0)
        {
            ans.push_back(subs);
        }
        return;
    }
    if(arr[index] <= target)
    {
        subs.push_back(arr[index]);
        combinationSum(index,arr,subs,ans,target - arr[index]);
        subs.pop_back();
    }
    combinationSum(index+1, arr, subs, ans, target);
}

int main() {
 vector<vector<int>>ans;
 vector<int>subs;
 vector<int>arr = {2,3,6,7};
 combinationSum(0,arr,subs,ans,7);
 for (const auto& i : ans) {
    for (int val : i) {
        cout << val << " ";
    }
    cout << endl;
}
  return 0;
}
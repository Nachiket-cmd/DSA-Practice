#include<bits/stdc++.h>
using namespace std;
/*We can do the permutation problem without using the extra spaces as well. 
- Take one pointer
- Move the pointer by taking each swapping operation into consideration*/

void Permutate(vector<int>&nums, vector<vector<int>>ans,int ptr)
{
    if(ptr == nums.size())
    {
      ans.push_back(nums);
      return;
    }

    for(int i = ptr; i< nums.size(); i++)
    {
        swap(nums[i],nums[ptr]);
        Permutate(nums,ans,ptr+1);
        swap(nums[i],nums[ptr]);
    }
}

int main()
{
    vector<int>nums = [1,2,3];
    vector<vector<int>>ans;
    int ptr = 0;
    Permutate(nums,ans,ptr);
    for(auto i : ans)
    {
        for(auto j: i)
        {
            cout<<j<<" ";
        }
    }
}

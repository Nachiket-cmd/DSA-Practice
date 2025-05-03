#include<bits/stdc++.h>
using namespace std;

/* Given an array nums of distinct integers, return all the possible permutations. You can return the answer in any order.

Example: [1,2,3]
: [[1,2,3],[1,3,2],[2,1,3],[2,3,1],[3,1,2],[3,2,1]]

Total no of permutations in any problem will be: n!
*/


void PermutationsI(vector<int>&ds, vector<int>&nums, vector<vector<int>>&ans, int freq[])
{
    if(ds.size() == nums.size())
    {
        ans.push_back(ds);
        return;
    }
    for(int i = 0; i<nums.size(); i++)
    {
        if(!freq[i]) {
            ds.push_back(nums[i]);
            freq[i] = 1;
            PermutationsI(ds,nums,ans,freq);
            freq[i] = 0;
            ds.pop_back();
        }
    }
}
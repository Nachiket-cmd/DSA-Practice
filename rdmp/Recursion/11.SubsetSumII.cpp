#include<bits/stdc++.h>
using namespace std;

/*Given an integer array nums that may contain duplicates, return all possible subsets(the power set). The Solution set must not contain duplicate subsets.
  Return the solution in any order.
  
  Brute Force: use pick and non pick technique to generate all the subsets. and then put all these subsets into a set. thats it.*/



  void findSubsets(int index, vector<int>&nums, vector<int>&ds, vector<vector<int>>&ans)
  {
    ans.push_back(ds);
    for( int i = index ; i < nums.size() ; i++)
    {
      if(i!=index && nums[i] == nums[i-1]) continue;
      ds.push_back(nums[i]);
      findSubsets(i+1,nums,ds,ans);
      ds.pop_back();
    }
  }



#include<bits/stdc++.h>
using namespace std;

void allsubseqwithSumK(int index, int arr[], vector<int> &subs, int sum,int k, int n)
{
  if(index == n)
  {
    if(sum == k)
    {
       for(auto i:subs) cout<< i << " ";
       cout<<endl;
    }
    return;
  }
  subs.push_back(arr[index]);
  sum += arr[index];
  subseqwithSumK(index + 1, arr,subs, sum, k, n);
  sum -= arr[index];
  subs.pop_back();
  subseqwithSumK(index+1, arr,subs, sum, k , n);
}


//Print any subsequence whose sum is sum. we need to do this not by using any boolean or conditions, we need to this by functional methods.
/*
- If i find a way by which my first recursion call can inform us that we found the subsequence we are looking for, we wont have to go ahead and use
the other recursive call.
- in the base case, if the condition is satisfied, return true else false.
*/
bool getoneSubseq(int index, int arr[], vector<int> &subs, int sum, int k, int n)
{
  if(index == n)
  {
    if(sum == k)
    {
      for(auto i:subs) cout<<i<<" ";
      cout<<endl;
      return true;
    }
    return false;
  }
  subs.push_back(arr[index]);
  sum += arr[index];
  if(getoneSubseq(index+1,arr,subs,sum,k,n)==true) 
  {
   return true;
  }
  subs.pop_back();
  sum -= arr[index];
  if(getoneSubseq(index+1,arr,subs,sum,k,n)==true) return true;
  {
    return false;
  }
}

/* You are supposed to tell that how many subsequences have the sum of K.*/
int noOfSubsequencesSumK(int index, int arr[], vector<int>&subs, int sum, int k, int n, int count)
{
  if(index == n)
  {
    if(sum == k) 
    {
      count++;
    }
    return count;
  }
  subs.push_back(arr[index]);
  sum += arr[index];
  int x = noOfSubsequencesSumK(index+1,arr,subs,sum,k,n,count);
  subs.pop_back();
  sum -= arr[index];
  int y = noOfSubsequencesSumK(index+1,arr,subs,sum,k,n,count);
  return x+y;
}



int main() {
    int arr[] = {1,2,1,1};
    int k = 3;
    int sum = 0;
    vector<int>subs;
    // subseqwithSumK(0, arr, subs,sum,k,4);
    int ans = noOfSubsequencesSumK(0,arr,subs,sum,k,4,0);
    cout<<ans;
    return 0;
}
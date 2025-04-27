#include<bits/stdc++.h>
using namespace std;

void subseqwithSumK(int index, int arr[], vector<int> &subs, int sum,int k, int n)
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


int main() {
    int arr[] = {1,2,1,1};
    int k = 3;
    int sum = 0;
    vector<int>subs;
    subseqwithSumK(0, arr, subs,sum,k,4);
}
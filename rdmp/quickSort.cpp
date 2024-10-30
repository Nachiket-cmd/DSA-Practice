/*
  TC- O(nlogn)
  Works on the principle of DIVIDE AND CONQUER, by breaking down the concepts into smaller sub problems. 
  Main 3 stepts in the algorithm:
  Choose a Pivot: It can be the first, last or the median element of the array. 
  Partition the Array: Rearrange the elements around the array in such a way that all the elements smaller to it are on the left and greater to it are on the right.
  Recursively call: Recursively apply the same process to the two parittioned sub-arrays.
  Base Case: Our recursive call will stop when there will be only one element left in our sub arrays, as one element is already sorted.
*/

#include<bits/stdc++.h>
using namespace std;

Partition(int l,int h,int arr[],int n)
{
  int pivot;
  pivot = arr[l];
  int i = l;
  int j = h;
  

int main()
{
  int arr[10] = {10,16,8,12,15,6,3,9,5,INT_MAX};
  int pivot = arr[0];
  int i = 0;
  int j = arr.size();
  
}



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

int Partition(int l , int r , vector<int>&arr )
{
 int pivot = arr[l];
 int i = l;
 int j = r;
  while(i<j)
  {
    do{
      i++;
    }while(arr[i]<=pivot);
    
    do{
      j--;
    }while(arr[j]>pivot);
    
    if(i<j)
    {
      swap(arr[i],arr[j]);
    }
  }
  swap(arr[j],arr[l]);
  return j;
}

void  quickSort(int l ,int r , vector<int> &arr)
{
  if(l<r)
  {
    int flag = Partition(l,r,arr);
    quickSort(l,flag,arr);
    quickSort(flag+1,r,arr);
  }
}

int main() 
{
  vector<int>arr;
  int input=0;
  int size;
  cout<<"Enter the number of element in the array";
  cin>>size;
  for(int i = 0 ; i<size ; i++)
  {
    cin>>input;
    arr.push_back(input);
  }
  int l = 0;
  int r = arr.size();
  quickSort(l,r,arr);
  for(int i =0 ; i<size; i++)
  {
    cout<<arr[i]<<" ";
  }
  return 0;
}


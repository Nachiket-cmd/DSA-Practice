//This File will contain the basics of Selection , Insertion and Bubble Sort.
//1. Selection Sort TC:- O(n^2)
#include<bits/stdc++.h>
using namespace std;
/* 1. Look for the MINIMUM element. SELECT MINIMUM AND SWAP
2. Place the MINIMUM element into the latest first place. SELECT ANOTHER MINIMUM AND SWAP IT WITH THE NEXT INDEX NUMBER
3. Sort in Ascending Order. KEEP ON DOING THIS UNTIL WE REACH THE SECOND LAST ELEMENT*/

int arr[]={13,46,24,52,20,9};
for(int i=0;i<arr.size()-1;i++)
{
  for(int j=i+1;j<arr.size();j++)
    {
      if(arr[i]>arr[j]){
        swap(arr[i],arr[j]);
      }
    }
}
return 0;
}

 /*Bubble Sort  TC: O(n^2)
 1.Pushes the Max element to the last of the array. 
 2.Compares the element with its adjacent element and swaps it they are not in sorted order(ascending).*/
//My approach
 int main() {
int arr[]={13,46,24,52,20,9};
 for(int i=0;i<6;i++)
{
    for(int j=0;j<6-i;j++){
    if(arr[j-1]>arr[j])
    {
        swap(arr[j-1],arr[j]);
    }
    }
}
for(int i=0;i<6;i++)
    {
        cout<<arr[i]<<" ";
    }
return 0;
 }

//Striver Approach
int didSwap=0;
for(int i=n-1;i>=1;i--)
  {
    for(int j=0;j<i;j++) {
      if(arr[j]>arr[j+1]) {
        int temp = arr[j];
        arr[j]=arr[j+1];
        arr[j+1]=temp;
        didSwap=1;
      }
    }
    if(didSwap==0) break;
}


//Insertion Sort TC: O(n^2)
/* 1. Always takes an element and places it in its correct position.
   2. Compare the current element one by one with all of its elements in the left and place the number in its appropiate place.*/
int main() {
int arr[]={13,46,24,52,20,9};
 for(int i=0;i<6;i++)
{
    int j=i;
    while(j>0 && arr[j-1]>arr[j])
    {
        swap(arr[j-1],arr[j]);
        j--;
    }
}
for(int i=0;i<6;i++)
    {
        cout<<arr[i]<<" ";
    }
return 0;
}

#include<bits/stdc++.h>
using namespace std;

int binarySearch(int num, vector<int>arr, int l, int r)
{
   int check = (l+r)/2;
   if(arr[check] == num) 
   {
       return check;
   }
   else if(arr[check] > num)
   {
       binarySearch(num,arr,l,check);
   }
   else if(arr[check] <num)
   {
       binarySearch(num,arr,check,r);
   }
}

int main() {
    int findNo;
    vector<int>arr;
    cout<<"Enter the no of elements in the array"<<endl;
    int num;
    cin>>num;
    cout<<"Enter the elements now";
    int x;
    for(int i=0;i<num;i++)
    {
        cin>>x;
        arr.push_back(x);
    }
    cout<<"Enter the number you want to find";
    cin>>findNo;
    int index = binarySearch(findNo, arr , 0 , num-1);
    cout<<"The number is at: "<<index<< " index"<<endl;
    return 0;
}



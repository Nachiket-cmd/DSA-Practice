//Merge Sort
#include<bits/stdc++.h>
using namespace std;
void Merge(int l, int mid, int r, vector<int>&arr)
{
    vector<int>tempVec;
    int left = l;
    int right = mid+1;
    while(left<= mid && right <= r)
    {
        if(arr[left]>=arr[right])
        {
            tempVec.push_back(arr[right]);
            right++;
        }
        else {
            tempVec.push_back(arr[left]);
            left++;
        }
    }
    //If elements on left are remaining.
    while(left<=mid)
        {
            tempVec.push_back(arr[left]);
        }
    //if elements are left on right side.
    while(right<=r)
        {
            tempVec.push_back(arr[right]);
        }
    for(int i=l ; i<r; i++)
        {
            arr[i] = tempVec[i-l];
        }
}
void MergeSort(int l , int h , vector<int>&arr)
{
    if(l<h)
    {
        int mid = (l+h)/2;
        MergeSort(l,mid,arr);
        MergeSort(mid+1,h,arr);
        Merge(l,mid,h,arr);
    }
}

int main()
{
    vector<int>arr;
    int size;
    cout<<"Enter the size of the array: "<<endl;
    cin>>size;
    int num;
    for(int i=0 ; i<size ; i++)
    {
        cin>>num;
        arr.push_back(num);
    }
    int l = 0;
    int h = arr.size();
    MergeSort(l,h,arr);
    cout<<"The Sorted array will be: "<<endl;
    for(int i = 0 ;i < size ; i++)
    {
        cout<<arr[i];
    }
    return 0;
}

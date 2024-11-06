//Merge Sort
#include<bits/stdc++.h>
using namespace std;
vector<int> Merge(int l, int mid, int r, vector<int>&arr)
{
    vector<int>tempVec;
    int left = l;
    int right = mid+1;
    while(left<= mid && right <= r)
    {
        if(arr[left]>arr[right])
        {
            tempVec.push_back(arr[right]);
            right++;
        }
        else {
            tempVec.push_back(arr[left]);
            left++;
        }
    }
    return tempVec;
}
void MergeSort(int l , int h , vector<int>&arr)
{
    if(l<h)
    {
        int mid = (l+h)/2;
        MergeSort(l,mid,arr);
        MergeSort(mid+1,h,arr);
        vector<int>ans = Merge(l,mid,h,arr);
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

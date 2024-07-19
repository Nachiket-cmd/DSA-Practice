//TC- O(n^2) SC- O(1)
#include<bits/stdc++.h>
using namespace std;


void insertionSort(int arr[],int n)
{
    int i=0;
    while(i<n)
    {
        int j=i-1;
        while(j>=0)
        {
            if(arr[j]>arr[i])
            {
                swap(arr[i],arr[j]);
            }
            if(arr[j-1]<arr[i] && arr[j+1]>arr[i])
            {
                swap(arr[j],arr[i]);
                break;
            }
            j--;
        }
        i++;
    }
}

int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    insertionSort(arr,n);
    for(auto i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}

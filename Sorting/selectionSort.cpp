//TC - O(n^2) SC - O(1)
// One of the best when it comes to using less memory for write operations.
// Lays the basics for Heap Sort.

#include<bits/stdc++.h>
using namespace std;


void selectionSort(int arr[],int n)
{
    for(int i=n-1;i>1;i--)
    {
        for(int j=i;j>n-i;j--)
        {
            if(arr[j-1]>arr[j])
            {
                swap(arr[j-1],arr[j]);
            }
        }
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
    selectionSort(arr,n);
    for(auto i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}

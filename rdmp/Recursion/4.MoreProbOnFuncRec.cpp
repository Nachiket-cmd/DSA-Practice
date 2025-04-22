#include<bits/stdc++.h>
using namespace std;

//Reversing an array using Recursion
void revArr(int arr[], int n, int size)
{
    if(n>size/2) return;

    int x = arr[n];
    arr[n] = arr[size-1];
    arr[size-1] = x;
    revArr(arr,n+1,size-1);
}

//Reversing an array using Recursion with one pointer
void revArr1(int arr[], int n, int size)
{
    if(n>size/2) return;

    int x = arr[n];
    arr[n] = arr[size-n-1];
    arr[size-n-1] = x;
    revArr1(arr,n+1,size);
}

//Checking if a given string is palindrome or not. 
bool isPalindrome(string s, int n, int size)
{
    if(n == size/2) return true;
    else if(s[n] != s[size-n-1])
    {
        return false;
    }
    return isPalindrome(s,n+1,size);   
}




int main() 
{
    //int arr[5] = {1,2,3,4,2};
    int count = 0;
    //revArr1(arr,count,5);
    //for(int i = 0 ;i<5; i++)
    //{
        cout<<arr[i];
   // }
   string s = "malayalam";
   int size = s.length();
   isPalindrome(s,count,size);
    return 0;
}
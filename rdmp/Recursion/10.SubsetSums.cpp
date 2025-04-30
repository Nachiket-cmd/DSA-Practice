#include<bits/stdc++.h>
using namespace std;
 
/*Problem:
Given an array of N integers, print sums of all subsets in it. The output should be printed in increasing order of sums. Expected TC - O(2^n), Expected SC - O(n)

My initial thought is to sort the array before passing it to the function and then find all the possible subsequences of those numbers with the array.
Sum of all those subsequences along with [] will be our ans. TC - O(2^n * nlogn) //this is wrong

Brute force: We can use power set, which will take 2^n * N to generate all the subsets. We will give this solution first in interview.

Best way: we can think of a recursive solution which can decide whether to select or not select a particular index*/


#include<bits/stdc++.h>
using namespace std;
 
/*Problem:
Given an array of N integers, print sums of all subsets in it. The output should be printed in increasing order of sums. Expected TC - O(2^n), Expected SC - O(n)

My initial thought is to sort the array before passing it to the function and then find all the possible subsequences of those numbers with the array.
Sum of all those subsequences along with [] will be our ans. TC - O(2^n * nlogn) //this is wrong

Brute force: We can use power set, which will take 2^n * N to generate all the subsets. We will give this solution first in interview.

Best way: we can think of a recursive solution which can decide whether to select or not select a particular index*/


void subsetSumI(int index, vector<int>&arr, vector<int>&subSet, int sum,int n)
{
    if(index == n)
    {
        subSet.push_back(sum);
        return;
    }
    
    //Take the number at index
    subsetSumI(index+1, arr, subSet, sum+arr[index],3);

    //Do not take the number at index
    subsetSumI(index+1 , arr, subSet, sum,3);
}


int main() 
{
    int index = 0;
    vector<int>arr = {3,1,2};
    sort(arr.begin(),arr.end());
    vector<int>ans;
    vector<int>subs;
    subsetSumI(index,arr,subs,0,3);
    for(int i = 0 ; i<8 ; i++)
    {
        cout<<subs[i]<<" ";
    }
    return 0;
}
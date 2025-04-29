/*Given a collection of numbers, and a target number, we need to find all the unique combinations in arr where the candidate numbers sum to target.
So basically the numbers should be unique and if we have same numbers, the sequence should still be the same. 
example: 
arr = [1, 1, 1, 2, 2] target = 4
answer: [1, 1, 2], [2, 2]


1. Our first approach can simply be by using set, which will keep only the unique subsequences. Also, we can change the logic of combination sum 1
   , and make changes by not staying at index and going directly to (index+1). 
   TC of this algo will O(2^n * klogn). This will be brute force and will take extra log n as the set will sort it as well.

   Interviewer wont like this approach so we need to optimize it.

2. for every index in the potential subsequences combinations, we have multiple options to choose from. Although, we have to keep a couple of things in mind
   to sastisfy the need of having unique combinations. 
   1. If we have already taken a possible number, lets say 1, then we recursively call for any other index which has the same number for that index in the
   possible combination. 
   2. If the target becomes in any step, it simply means that our subs is holdig one of the possible subsequences, so push it to ans. 
   3. If target is not 0 and we have reached arr.size(). It simply means that the current subs is not the correct one. 

   
*/

#include<bits/stdc++.h>
using namespace std;


void combinationSumII(int index, vector<int>arr, vector<int>subs, vector<vector<int>>ans, int target)
{
     if(target == 0)
     {
        ans.push_back(subs);
        return;
     }

     for(int i = index ; i < arr.size() ; i++)
     {
        if(i>index && (arr[i]==arr[i - 1]) continue;
        if(arr[i]>target) break;

        subs.push_back(arr[i]);
        combinationSumII(i+1, arr, subs, ans, target - arr[i]);
        subs.pop_back();
     } 
}

int main() 
{
    int arr[] = {1,1,1,2,2};
    int target = 4;
     arr.sort();
     vector<vector<int>>ans;
     vector<int>subs;
     combinationSumII(0,arr,subs,ans,target);
     for(auto i:ans)
     {
        for(auto j:i) {
            cout<<j<<" ";
        }
        cout<<endl;
     }
     return 0;
    }
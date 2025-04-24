/*What is a subsequence?
The sequence which can be contigous or non contigous, but strictly follows the order.
Example: arr[3,1,2]
Subsequences can be: {3}, {1}, {2}, {3,1}, {1,2}, {3,2}, {3,1,2} (All of these follow the order of the sequence)
{1,2,3} wont be a subsequence.*/
#include<bits/stdc++.h>
using namespace std;
 
void printSubsequence(int count, int arr[], vector<int> &subseq, int n)
{
   if(count == n)
   {
      for(auto i : subseq) {
         cout<<subseq[i]<<" ";
      }
      if(subseq.size() == 0)
      {
         cout<<"{}";
      }
      cout<<endl;
      return;
   }

   //take or pick the particular index into the subsequence
   subseq.push_back(arr[count]);
   printSubsequence(count+1, arr, subseq, n); 
   subseq.pop_back();

   // not pick, or not take condition, this element is not added to your subsequence.
   printSubsequence(count+1, arr, subseq, n); 
}



int main() 
{
   vector<int>subseq;
   int arr[] = {3,1,2};
   int n = 3;
   int count = 0;
   printSubsequence(count,arr,subseq,n);
   return 0;
}
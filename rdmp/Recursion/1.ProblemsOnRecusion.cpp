#include<bits/stdc++.h>
using namespace std;

//1. Print 1 to n linearly.
void printNum(int num, int n) {
    if (num > n) return;
    cout << num << endl;
    printNum(num+1, n);
}

//2. Print 1 to n linearly with backtrack. 
void printNBackTrack(int num, int n)
{
   if(num == 0) return;
   cout<<(n-num+1)<<endl;
   num--;
   printNBackTrack(num,n);
}
void printNto1BackTrack(int num, int n)
{
  if(num > n) return;
  cout<<(n-num+1)<<endl;
  printNto1BackTrack(num+1,n);  
}


int main() {
    int n = 5;
    int num = 1;
   // printNBackTrack(num, n);
    printNto1BackTrack(num,n);
    return 0;
}


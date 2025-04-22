#include<bits/stdc++.h>
using namespace std;

//Questions on Multiple recursion calls
//1. Fibonnaci sequence
//We will be given N, we are supposed to give back Nth fibonnaci number in the sequence. 
int fib(int n)
{
  if(n <=1) return n;
  return (fib(n-1) + fib(n-2));
}

int main()
{
  int n = 0;
  int ans = fib(5);
  cout<<ans<<endl;
  return 0;
}

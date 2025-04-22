#include<bits/stdc++.h>
using namespace std;

//Sum of first n numbers.
//1. parameterized way. think of it as a for loop.
/*void sumOfN(int num, int sum) 
{
  if(num < 1) 
  {
    cout<< sum;
    return;
  }   
  sumofN(num-1,sum+num);
}*/

//2. functional solution. In this we do not want our function to print the answer. Instead we want our function to return us the answer.
int sumN(int n)
{
    if(n <1) return 0;
    return n + sumN(n-1);
}


//3.factorial of n
int fact(int n)
{
    if(n == 1) return 1;
    return n * fact(n-1);
}


int main() 
{
    int sum = 0;
    int num = 5; 
    //sumofN(num,sum);
    int ans =sumN(num);
    cout<<ans;
    return 0;
}



 
//Those who cannot remember the past are condemned to repeat it. 
/*Ways to solve a DP problem:
  1. Tabulation (Bottom up DP)
  2. Memoization (Top down DP)
 
 Overlapping Subproblem: Whenever we end up solving the same subproblem which has already been solved, we wont be solving it again. Instead, we will simply use the solution
 to the subproblem as it has already been solved. 
 This is where memoization jumps in. It is the process of storing the value of the subproblems in some map/table and use it in our future cases. 

 Lets say in the cae of Fibonacci sequence. We used recursion to solve the problem. We used to take one parameter in the recursive call. 
 For Example, We want to calculate f(5), which is the 5th number in the fib seq. To calculate that, f(5) = f(4) + f(3)
 To solve f(4), we will go for f(3) + f(2) and so on. 
 Now, as we would have already calculated the value of f(2) on solving f(3)(f(2)+f(1)), we will use a 1-D array(as we are taking 1 parameter so 1-D array) to store the solved
 values of the subproblems. As we have already stored the calcualted value of f(2), there will be no need to solve recursively for f(2) while calculating for f(4). Similarily, 
 there will also be no need to calculate for f(3) while solving for f(5), as we already have the answer to f(3) stored in the array.

 So, we can convert this fib sequence problem from just recursion to dp with memoization like this:
 */

import java.util.Arrays;
class Main{
 public static int fib(int n, int[]dp)
 {
  if(n<=1) return n;
  if(dp[n]!=-1)
  {
    return dp[n];
  }
  dp[n]=fib(n-1,dp)+fib(n-2,dp);
  return dp[n];
 }

 public static void main(String[] args)
 {
  int[]dp = new int[7];
  Arrays.fill(dp,-1);
  System.out.println(fib(6,dp));
 }
}

/*As we are making a new call each time only once as we already have the answer to those calls afterwards in our dp array, we are only making one recursive call for each number.
  Therefore, the TC for this will be O(n). SC will be O(n) as we are using a recursion stack space of n and array of n for dp. 
 */


 /*How to convert recursion into a tabulation form. Tabulation is bottom up. 
  In tabulation, we will try to go from the base case(bottom) to the upper solutions. Recursion is top down but tabulation it will be bottom up. 
  So, we will start from taking the base case, which means that dp[0]=0 and dp[1]=1. 
  Now, for n=2, we can execute the recursive calls as we already have fib(n-1)(fib(1)=dp[1]) and fib(n-2)(fib[0]=dp[0]).
  
 */

/*Sliding Window and Two pointers
All the questions generally will use 2 pointers (we can take them as l and r)
4 Types of Questions:
1. Constant Window: We have particular condition like finding the biggest sum with CONSECUTIVE ELEMENTS.
    The elements should be consecutive. 
    We can simply shift our pointers l and r ahead to move the window ahead and avoid adding up all the elements again and again in
    the window.
    We will stop when r will be greater than the size of the array(r>sizeofArray)
    
    So the basic algo will be:
    while(r<n-1)
    {
     sum = sum - arr[l];
     l++;
     r++;
     sum = sum + arr[i];
     MaxSum = max(MaxSum,sum);
    }

  2.  Longest Subarray or Substring(Dynamic Window): In this you basically will be asked to find the size of the subarray
      which will have the sum less than the given sum. The questions can change as well but the concept will
      remain the same. You are required to find that CONSECUTIVE ELEMENTS subarray which will satisfy the 
      condition of the given question.

      In Interviews, we will start with brute force(generating all the subarrays which will be O(n^2)) and then move on to the 
      optimal one.

      Better solution: O(2n)
      - Use 2 pointers: l and r
      - Start with a subarray of size 1. (l and r at 0 index)
      - l : use for shrinking (left side )
      - r : use for expanding ( right side)
      - Keep on increasing/decreasing the window size until the condition given holds true.
      - length of the window in every step will be: (r-l+1)
      - Now whenever the condition voilates, try to make the condition true by shriking from left
      to make the W Size true.

      Basic Algo:
      l=0;
      r=0;
      sum = 0;
      maxSize = 0;
      while(r<n)
      {
        sum = sum + arr[r];
        while(sum > k )
        {
          sum = sum - arr[l];
          l++;
        }
      if(sum<=k)
        {
          maxSize = max(maxSize,(r-l+1));
        }
      r++;
      }

      Optimal Solution: O(n)
      - For optimizing further, 
      When we are doing the shrinking step, why are we shrinking the subarray more if the subarray becomes
      smaller than the current max subarray size? There is no need to shrink it further if it goes smaller 
      than the current max subarray size. Now, we can only use this optimization when the question is only
      asking us the length of the subarray. If the question would have been to find out the subarray, then
      we cannot skip any element like this.

      Basic Algo:
       l=0;
      r=0;
      sum = 0;
      maxSize = 0;
      while(r<n)
      {
        sum = sum + arr[r];
        if(sum > k )  // just change the while to if to prevent multiple shrinking
        {
          sum = sum - arr[l];
          l++;
        }
      if(sum<=k)
        {
          maxSize = max(maxSize,(r-l+1));
        }
      r++;
      }

    3. No of Subarrays with some condition:
       These kind of questions will be solved using Pattern 2

    4. Finding the Shortest/Minimum window for some given condition:
       Identical to pattern 2  
    */


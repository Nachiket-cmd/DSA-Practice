/* Problem Statement: Given an array nums containing n distinct numbers in the range [0, n], 
   return the only number in the range that is missing from the array.

   Initial Thought: We can create a set and start storing the elements in the set data structure. as we will store
   elements in the set, we can keep a counter starting from 0 to check if the element is present in the input or not.
   This solution wont work tho and we know why. 
 
   Solution 1(Given in video, I couldnt think about this): Sort the array, and then check which number is missing in consecutive order. that number is the missing one.
   Solution 2(Again Given in video, I couldnt think of this either): We can simply take the sum of n numbers and then, take the sum of given numbers in the array. The difference between these two sums is the required number.
*/

//Solution 1:
class Solution {
public:
    vector<int>arr;
    arr = nums.sort();
    for(int i = 0 ; i<nums.size() ; i++)
    {
      if(num[i] - nums[i-1] != 1)
      {
        return nums[i]+1;
      }
    }
    return -1;
};

//Solution 2:
class Solution {
public:
    int missingNumber(vector<int>& nums) {
     int target = nums.size();
     int targetSum = ((target)*(target+1))/2;
     int currSum = 0;
     for(int i=0 ; i<nums.size() ; i++)
     {
        currSum = currSum + nums[i];
     }
     targetSum = targetSum - currSum;
     return targetSum;
    }
};

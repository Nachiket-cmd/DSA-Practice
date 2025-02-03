/* 
We have 2 ways to analyze an algorithm. 1. Time complexity  2. Space complexity 
Nowadays, memory is cheap and readily available, but time isnt. So TC is more important one among the
two in this case. 
Time Complexity:
Big O: mathematical notation that describes the limiting behaviour of a function when the argument tends
towards a particular value or infinity.
Helps us understand how the performance of an algorithm changes as the size of the input changes .

  Problem: Given an integer array nums, 
  return true if any value appears at least twice in the array, and return false if every element is distinct.
  
  Initial Thought: Sort the array using one of the sorting algorithms and if a number repeats itself right after
  its occurence, It is the duplicate number.  (TC - O(nlogn) SC- O(1))

  Another brute force solution(i Couldnt think of this) : Just loop through the loop againa and again and check the 
  occurence of each element. if it repeats, game over, if not then return false.

  Another much better solution: (Sets have the same lookup and other time complexities as hash table as it implemented
  using hash tables.)
  We can use an set and start storing the elements in it. We will keep
  a counter which will increment on every iteration of us inserting the elements. If on any counter, the counter 
  and the number of elements do not match. It means that number is the duplicate number. (TC - O(n) SC-O(n)).

  Another solution: We can also use a hash map and store the elements as the key and its number of occurences as
  values, and the number which has more than one occurences will be the required number. (TC and SC, Same as the soln.
  above)

*/

// Solution 1 code: Done by me

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) 
        {
            set<int>mp;
            int count = 0;
            for(int i=0; i<nums.size();i++)
            {
               count++;
               mp.insert(nums[i]);

             if(mp.size()!=count)
             {
                    return true;
                }
        }
        return false; 
    }
};


//Solution 2 code:  Done by me
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) 
        {
            unordered_map<int,int>mp;
            for(int i = 0 ; i<nums.size() ; i++)
            {
                if(mp.find(nums[i])!= mp.end())
                {
                    return true;
                }
                mp[nums[i]] = 1;
            }
            return false;
    }
};



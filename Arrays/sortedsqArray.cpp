// We can use the concept of two pointers.
//left will traverse from the start and right will traverse from the end of the array.
//which one will be bigger in abs value, will get its place in the new array.
#include<vector>
using namespace std;

vector<int>sortedSquaredArray(vector<int> array) {
  vector<int>ans(array.size(),0);
  int left=0;
  int right=array.size()-1;
  for(int i = array.size()-1;i>=0;i--)
    {
      if(abs(array[left]) > abs(array[right])) {
        ans[i] = array[left] * array[left];
        left++;
      }
      else{
        ans[i]= array[right] * array[right];
        right--;
      }
    }
  return ans;
}

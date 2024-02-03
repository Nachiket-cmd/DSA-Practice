/*Although this solution will use a bit of extra space, it is cleaner. We can simply use a queue and check its top iteratively by comparing it with array. 
Finally, if the entire sub sequence would be present in array, the queue will be empty in the end. If the sub sequence is not present, the queue will not be empty.*/
using namespace std;

bool isValidSubsequence(vector<int> array, vector<int> sequence) {
  queue<int>x;
  for(auto i=0;i<sequence.size();i++)
    {
      x.push(sequence[i]);
    }
  for(auto i=0;i<array.size();i++)
    {
      if(array[i]==x.front())
      {
        x.pop();
      }
    }
  if(x.empty()==true)
  {
    return true;
  }
  return false;
}

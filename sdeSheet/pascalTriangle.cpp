/* Given an integer numRows, return the first numRows of Pascal's triangle.

In Pascal's triangle, each number is the sum of the two numbers directly above it as shown:
input: 5
Output: [[1],[1,1],[1,2,1],[1,3,3,1],[1,4,6,4,1]]
     1
    1 1
   1 2 1
  1 3 3 1
 1 4 6 4 1

Types of questions which can be asked in this:
1. Given R and C, find the element at any given place. 
   Solution: We can use combination nCr to solve this. Where n will be the row and r will the column

2. Print nth row of the pascal triangle.
   N=5;

3. Print the entire pascal triangle.

*/


//For type 1:
long long pascalPosition(int row, int col) {
long long res = 1;
for(int i=0;i<col;i++)
{
 res = res * (row-i);
 res = res/i+1;
}
return res;
}

//For type 2:
int printRow(int row) {
  for(int i=0;i<row;i++)
  {
    int res = 1;
    if(i==0 || i=row-1) 
    {
      cout<<i<<" ";
    }
    else{
    res = res * (row - i);
    res = res/i;
    cout<<res<<" ";}
  }
}

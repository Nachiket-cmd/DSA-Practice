/* Problem Statement: Given an m x n integer matrix matrix, if an element is 0, set its entire row and column to 0's.
You must do it in place.
Input: matrix = [[1,1,1],[1,0,1],[1,1,1]]
Output: [[1,0,1],[0,0,0],[1,0,1]] */

/* We can solve this problem using Four approaches. (Here I have explained all the possible solutions of this problem).

1.Solved using Matrix with Extra space. TC : O((NM)(N+M)), SC : O(N*M).
2. Solved using Matrix with Constant space. TC : O((NM)(N+M)), SC : O(1).
3. Solved using Array + Hash Table (Unordered set). TC : O(N*M), SC : O(N+M).
4. Solved using Matrix with Constant space. Optimized Approaches. TC : O(N*M), SC : O(1).   */

//Approach 1 
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int row = matrix.size();
        int col = matrix[0].size();
        vector<vector<int>> visited = matrix;
        for(int i=0 ; i<row ; i++)
        {
            for(int j=0 ; j<col ; j++)
            {
                if(matrix[i][j]==0)
                {
                    for(int k=0;k<row;k++)
                    {
                        visited[k][j]=0;
                    }
                }
            }
        }

        for(int i=0 ; i<row ; i++)
        {
            for(int j=0 ; j<col ; j++)
            {
                if(matrix[i][j]==0)
                {
                    for(int k=0;k<col;k++)
                    {
                        visited[i][k]=0;
                    }
                }
            }
        }

        for(int i=0 ; i<row ; i++)
        {
            for(int j=0 ; j<col ; j++)
            {
                matrix[i][j]=visited[i][j];
            }
        }
        
    }
};


//Approach 2
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
       int row = matrix.size();
       int col = matrix[0].size();
       for(int i=0;i<row;i++)
       {
        for(int j=0;j<col;j++)
        {
            if(matrix[i][j]==0)
            {
                for(int k=0;k<row;k++)
                {
                    if(matrix[k][j]!=0)
                    {
                        matrix[k][j]=INT_MAX-3213;
                    }
                }
            }
        }
       }

       for(int i=0;i<row;i++)
       {
        for(int j=0;j<col;j++)
        {
            if(matrix[i][j]==0)
            {
                for(int k=0;k<col;k++)
                {
                    if(matrix[i][k]!=0)
                    {
                        matrix[i][k]=INT_MAX-3213;
                    }
                }
            }
        }
       }

       for(int i=0;i<row;i++)
       {
        for(int j=0;j<col;j++)
        {
            if(matrix[i][j]==INT_MAX-3213)
            {
                matrix[i][j]=0;
            }
        }
       }
    }
};


//Approach 3
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
        unordered_set<int> setRows; 
        unordered_set<int> setColumns; 
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(matrix[i][j] == 0){
                    setRows.insert(i);
                    setColumns.insert(j);
                }
            }
        }
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(setRows.count(i) > 0 || setColumns.count(j) > 0){
                    matrix[i][j] = 0;
                }
            }
        }
    }
};


//Approach 4 


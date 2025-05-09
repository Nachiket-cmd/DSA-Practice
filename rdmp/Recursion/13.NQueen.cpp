#include<bits/stdc++.h>
using namespace std;
/*We are supposed to find the order in which we can place our queen such that we can place n queens in nxn board and no queen can attack each other*/
/*Now for us to check if it is safe to place a queen at one place, we have to check on top and bottom left diagonal and on the left side of the potential placeholder.*/
class Solution {

    public:
        bool isSafe1(int row, int col, vector<string>&board, int n)
        {
            int duprow = row;
            int dupcol = col;
    
            while(row>=0 && col>=0) //for lower diagonal
            {
                if(board[row][col]=='Q') return false;     //if we find any Q along that diagonal. not a possible answer
                row--;
                col--;
            }
    
            col = dupcol; //bring the pointer back to where we started from. 
            row = duprow;
            while(col>=0) //checking for the middle diagonal
            {
                if(board[row][col]=='Q') return false; //if found anything along that diagonal, return false. else we good.
                col--;
            }
    
            row = duprow; //bring back the pointer to its original place
            col = dupcol;
            while(row<n && col>=0) //for upper diagonal
            {
                if(board[row][col] == 'Q') return false; 
                row++;
                col--;
            }
            return true;
        }
    
    public:
        void solve(int col, vector<string>&board, vector<vector<string>>&ans, int n)
        {
            if(col == n) //base case. If we have reached the last column and last row, it basically means that we do have an answer and we are done with the solution.
            {
                ans.push_back(board);
                return;
            }
    
            for( int row = 0 ; row<n ; row++) //try every row from 0 to n-1 and check is it safe to place a queen at that particular position.
            {
                if(isSafe1(row,col,board,n)) {
                    board[row][col] = 'Q'; //if safe, place the queen at that spot.
                    solve(col+1,board,ans,n); //then call the recursion for the next column. 
                    board[row][col] = '.'; //backtrack step. When we come back from recursion, make sure to take away that Q for other recursions ahead.
                }
            }
        }
    
    
    
    
    public:
        vector<vector<string>> solveNQueens(int n)  // nxn vector of strings. this will be our answer(the entire chess board)
        { 
            vector<vector<string>>ans; // nxn vector of strings. this will be our answer(the entire chess board)
            vector<string>board(n); //these are the strings(rows), which we will put into our ans data structure. The combination of all these strings will be our final chess board.
            string s(n,'.'); //creating a string named s of size n with empty spaces. 
            for(int i = 0; i < n ; i++)
            {
                board[i] = s; //putting these empty strings into the board vector so that we can work with them on placing the queen.
            }
            solve(0,board,ans,n); //giving the 0th column, passing the board, ans which will store the answer and the number of rows/cols in the board.
            return ans;
        }
    };
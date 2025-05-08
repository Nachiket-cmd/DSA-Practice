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
    
            while(row>=0 && col>=0)
            {
                if(board[row][col]=='Q') return false;
                row--;
                col--;
            }
    
            col = dupcol;
            row = duprow;
            while(col>=0)
            {
                if(board[row][col]=='Q') return false;
                col--;
            }
    
            row = duprow;
            col = dupcol;
            while(row<n && col>=0)
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
    
            for( int row = 0 ; row<n ; row++)
            {
                if(isSafe1(row,col,board,n)) {
                    board[row][col] = 'Q';
                    solve(col+1,board,ans,n);
                    board[row][col] = '.'; //backtrack step. When we come back from recursion, make sure to take away that Q for other recursions ahead.
                }
            }
        }
    
    
    
    
    public:
        vector<vector<string>> solveNQueens(int n) {
            vector<vector<string>>ans;
            vector<string>board(n);
            string s(n,'.'); //creating a string of size s with empty places for board building.
            for(int i = 0; i < n ; i++)
            {
                board[i] = s;
            }
            solve(0,board,ans,n);
            return ans;
        }
    };
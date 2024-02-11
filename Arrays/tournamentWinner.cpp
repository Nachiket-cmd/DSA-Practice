//We will create a map which will store a value associated with each team participating in the tournament.
//Iterate though competitions and results array together at the same time and consequently increase the value of winner in the map.
//Use another variable to keep a check for the team with maximum points.

#include<bits/stdc++.h>
using namespace std;
#include<bits/stdc++.h>
using namespace std;

string tournamentWinner(vector<vector<string>> competitions, vector<int> results) {

  string tourWinner = "";
  map<string,int>scoreBoard;

  for(int i=0; i< results.size(); i++) {
    string curWinner = competitions[i][!(results[i])];

    scoreBoard[curWinner] += 3;

    tourWinner = (scoreBoard[curWinner] > scoreBoard[tourWinner]
      ? curWinner
      : tourWinner);
}

  return tourWinner;
}

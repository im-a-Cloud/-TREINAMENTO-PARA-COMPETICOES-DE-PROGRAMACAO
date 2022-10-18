#include <bits/stdc++.h>
using namespace std;

int main()
{
  vector<char> sequence;
  int leftGames = 0, leftPoints = 0, rightGames = 0, rightPoints = 0;
  string player = "left";
  char s;
  while (cin >> s){
    sequence.push_back(s);
  }
  for (int i = 0; i < sequence.size(); i++){

    if (sequence[i] == 'S'){
      if (player == "left"){
        leftPoints += 1;
      } else {
        rightPoints += 1;
      }
    }
    if (sequence[i] == 'R'){
      if (player == "left"){
        rightPoints += 1;
        player = "right";
      } else {
        leftPoints += 1;
        player = "left";
      }
    }

    if (sequence[i] == 'Q'){
      if (leftGames == 2){
        cout << leftGames << " (winner) - " << rightGames << endl;
        break;
      }
      else if (rightGames == 2){
        cout << leftGames << " - " << rightGames << " (winner)" << endl;
        break;
      }
      else {
        if (player == "left"){
          cout << leftGames << " (" << leftPoints << "*) - " << rightGames << " (" << rightPoints << ")" << endl;
        }
        else{
          cout << leftGames << " (" << leftPoints << ") - " << rightGames << " (" << rightPoints << "*)" << endl;
        }
      } 
    }

    if ((leftPoints >= 5 && leftPoints - rightPoints >= 2) || (leftPoints >= 10)){
      leftGames++;
      leftPoints = 0;
      rightPoints = 0;
    }
    if ((rightPoints >= 5) && (rightPoints - leftPoints >= 2) || (rightPoints >= 10)){
      leftPoints = 0;
      rightPoints = 0;
      rightGames++;
    }
  }

  return 0;
}
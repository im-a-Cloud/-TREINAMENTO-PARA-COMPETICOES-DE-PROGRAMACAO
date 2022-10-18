#include <bits/stdc++.h>
using namespace std;

bool valid(int l, int x){
  int calc = x + l - 1;
  if (calc > 10) {
    return false;
  }
  else {
    return true;
  }
}

int main() {
  int n, d, size, r, c;
  cin >> n;
  int arr[10][10];

  while (n--) {
    cin >> d >> size >> r >> c;
    if (d == 0)
    {
      if (!valid(size, c))
      {
        cout << "N" << endl;
        return 0;
      }
      else
      {
        for (int j = c - 1; j < c + size -1; j++)
        {
          if (arr[r - 1][j] == 1)
          {
            cout << "N" << endl;
            return 0;
          }
          else
          {
            arr[r - 1][j] = 1;
          }
        }
      }
    }
    else
    {
      if (!valid(size, r))
      {
        cout << "N" << endl;
        return 0;
      }
      else
      {
        for (int i = r - 1; i < r + size - 1; i++)
        {
          if (arr[i][c - 1] == 1)
          {
            cout << "N" << endl;
            return 0;
          }
          else
          {
            arr[i][c - 1] = 1;
          }
        }
      }
    }
  }
  cout << "Y" << endl;
  return 0;
}
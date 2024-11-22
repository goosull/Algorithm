#include <bits/stdc++.h>

using namespace std;

int n, ab, ca, bc;

int dcount(vector<int> d1, vector<int> d2) {
  int win = 0;
  for (int x : d1) {
    for (int y : d2) {
      if (x > y)
        win++;
      else if (x < y)
        win--;
    }
  }
  return win;
}

bool find(vector<int> dice1, vector<int> dice2) {
  for (int a = 1; a <= 10; a++) {
    for (int b = 1; b <= 10; b++) {
      for (int c = 1; c <= 10; c++) {
        for (int d = 1; d <= 10; d++) {
          vector<int> dice3 = {a, b, c, d};
          int ab = dcount(dice1, dice2);
          int bc = dcount(dice2, dice3);
          int ca = dcount(dice3, dice1);

          if ((ab > 0 && bc > 0 && ca > 0) || (ab < 0 && bc < 0 && ca < 0))
            return true;
        }
      }
    }
  }

  return false;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  cin >> n;

  for (int t = 0; t < n; t++) {
    vector<int> dice1(4), dice2(4);
    for (int i = 0; i < 4; i++) {
      cin >> dice1[i];
    }
    for (int i = 0; i < 4; i++) {
      cin >> dice2[i];
    }

    if (find(dice1, dice2)) {
      cout << "yes\n";
    } else {
      cout << "no\n";
    }
  }
}

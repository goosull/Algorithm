#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int countChangesHorizontal(const vector<string>& flag, char top, char mid,
                           char bottom) {
  int changes = 0;

  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 9; j++) {
      if (flag[i][j] != top) changes++;
    }
  }

  for (int i = 2; i < 4; i++) {
    for (int j = 0; j < 9; j++) {
      if (flag[i][j] != mid) changes++;
    }
  }

  for (int i = 4; i < 6; i++) {
    for (int j = 0; j < 9; j++) {
      if (flag[i][j] != bottom) changes++;
    }
  }

  return changes;
}

int countChangesVertical(const vector<string>& flag, char left, char mid,
                         char right) {
  int changes = 0;

  for (int i = 0; i < 6; i++) {
    for (int j = 0; j < 3; j++) {
      if (flag[i][j] != left) changes++;
    }
  }

  for (int i = 0; i < 6; i++) {
    for (int j = 3; j < 6; j++) {
      if (flag[i][j] != mid) changes++;
    }
  }

  for (int i = 0; i < 6; i++) {
    for (int j = 6; j < 9; j++) {
      if (flag[i][j] != right) changes++;
    }
  }

  return changes;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  vector<string> flag(6);
  for (int i = 0; i < 6; i++) {
    cin >> flag[i];
  }

  int minChanges = 99999;

  for (char top = 'A'; top <= 'Z'; top++) {
    for (char mid = 'A'; mid <= 'Z'; mid++) {
      if (top == mid) continue;
      for (char bottom = 'A'; bottom <= 'Z'; bottom++) {
        if (mid == bottom) continue;
        minChanges =
            min(minChanges, min(countChangesHorizontal(flag, top, mid, bottom),
                                countChangesVertical(flag, top, mid, bottom)));
      }
    }
  }

  cout << minChanges << '\n';
  return 0;
}

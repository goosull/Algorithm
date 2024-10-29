#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<string> fr;
vector<string> fr2;
int m;

int main() {
  ios_base ::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int n;
  cin >> n;
  for (int i = 0; i < n; i++) {
    string temp;
    cin >> temp;
    fr.push_back(temp);
  }

  for (int i = 0; i < n; i++) {
    int cnt = 0;
    string temp(n, 'X');

    for (int j = 0; j < n; j++) {
      if (fr[i][j] == 'Y') {
        if (temp[j] != 'O') {
          cnt++;
          temp[j] = 'O';
        }
        for (int k = 0; k < n; k++) {
          if (k == i) continue;
          if (fr[j][k] == 'Y') {
            if (temp[k] != 'O') {
              cnt++;
              temp[k] = 'O';
            }
          }
        }
      }
    }
    if (m < cnt) m = cnt;
  }

  cout << m << '\n';

  return 0;
}

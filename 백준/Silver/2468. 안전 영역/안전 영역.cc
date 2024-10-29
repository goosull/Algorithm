#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> field;
vector<vector<int>> v;
int rain;
int cnt;
int ans;
int n;

void dfs(int x, int y, int rain, int d) {
  if (v[x][y]) return;
  v[x][y] = 1;
  if (field[x][y] > rain) {
    if (x > 0 && field[x - 1][y] > rain) {
      dfs(x - 1, y, rain, d + 1);
    }
    if (x < n - 1 && field[x + 1][y] > rain) {
      dfs(x + 1, y, rain, d + 1);
    }
    if (y > 0 && field[x][y - 1] > rain) {
      dfs(x, y - 1, rain, d + 1);
    }
    if (y < n - 1 && field[x][y + 1] > rain) {
      dfs(x, y + 1, rain, d + 1);
    }
    if (d == 1) cnt++;
  }
}

int main() {
  ios_base ::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  cin >> n;

  for (int i = 0; i < n; i++) {
    vector<int> templ, vt;
    for (int j = 0; j < n; j++) {
      int temp;
      cin >> temp;
      if (temp > rain) rain = temp;
      templ.push_back(temp);
      vt.push_back(0);
    }
    field.push_back(templ);
    v.push_back(vt);
  }

  for (int i = 0; i < rain; i++) {
    for (int j = 0; j < n; j++) {
      for (int k = 0; k < n; k++) {
        dfs(j, k, i, 1);
      }
    }
    for (int j = 0; j < n; j++) {
      for (int k = 0; k < n; k++) {
        v[j][k] = 0;
      }
    }
    if (cnt > ans) ans = cnt;
    cnt = 0;
  }

  cout << ans;

  return 0;
}

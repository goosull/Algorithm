#include <bits/stdc++.h>

using namespace std;

int n, m, k, ans;
vector<vector<int>> v;
vector<vector<int>> visited;

void bfs(int x, int y) {
  if (visited[x][y] == 1) {
    return;
  }

  visited[x][y] = 1;

  if (y < m - 1 && visited[x][y + 1] == 0 && abs(v[x][y] - v[x][y + 1]) <= k) {
    bfs(x, y + 1);
  }
  if (x < n - 1 && visited[x + 1][y] == 0 && abs(v[x][y] - v[x + 1][y]) <= k) {
    bfs(x + 1, y);
  }
  if (y > 0 && visited[x][y - 1] == 0 && abs(v[x][y] - v[x][y - 1]) <= k) {
    bfs(x, y - 1);
  }
  if (x > 0 && visited[x - 1][y] == 0 && abs(v[x][y] - v[x - 1][y]) <= k) {
    bfs(x - 1, y);
  }

  return;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  cin >> n >> m >> k;

  v.resize(n);
  visited.resize(n);

  for (int i = 0; i < n; i++) {
    v[i].resize(m);
    visited[i].resize(m);
    for (int j = 0; j < m; j++) {
      cin >> v[i][j];
      visited[i][j] = 0;
    }
  }

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      if (visited[i][j] == 1) {
        continue;
      }
      ans++;
      bfs(i, j);
    }
  }

  cout << ans << '\n';
}

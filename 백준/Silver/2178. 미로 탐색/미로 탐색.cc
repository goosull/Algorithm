#include <bits/stdc++.h>

using namespace std;

int n, m;
vector<vector<int>> grid;
vector<vector<bool>> visited;

int bfs(int x, int y, int cnt) {
  queue<pair<int, int>> q;
  q.push({x, y});

  while (!q.empty()) {
    int cx = q.front().first;
    int cy = q.front().second;
    q.pop();

    if (visited[cy][cx]) {
      continue;
    }
    visited[cy][cx] = true;

    if (cy == n - 1 && cx == m - 1) {
      return grid[cy][cx];
    }

    if (cx - 1 >= 0 && grid[cy][cx - 1] != 0 && !visited[cy][cx - 1]) {
      q.push({cx - 1, cy});
      grid[cy][cx - 1] = grid[cy][cx] + 1;
    }
    if (cx + 1 < m && grid[cy][cx + 1] == 1 && !visited[cy][cx + 1]) {
      grid[cy][cx + 1] = grid[cy][cx] + 1;
      q.push({cx + 1, cy});
    }
    if (cy - 1 >= 0 && grid[cy - 1][cx] == 1 && !visited[cy - 1][cx]) {
      grid[cy - 1][cx] = grid[cy][cx] + 1;
      q.push({cx, cy - 1});
    }
    if (cy + 1 < n && grid[cy + 1][cx] == 1 && !visited[cy + 1][cx]) {
      grid[cy + 1][cx] = grid[cy][cx] + 1;
      q.push({cx, cy + 1});
    }
  }
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  cin >> n >> m;

  grid.resize(n, vector<int>(m, 0));
  visited.resize(n, vector<bool>(m, false));

  for (int i = 0; i < n; i++) {
    string s;
    cin >> s;

    for (int j = 0; j < s.length(); j++) {
      grid[i][j] = s[j] - '0';
    }
  }

  int ans = bfs(0, 0, 0);

  cout << ans;
  return 0;
}
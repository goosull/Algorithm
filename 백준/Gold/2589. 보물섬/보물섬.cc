#include <algorithm>
#include <iostream>
#include <queue>
#include <vector>
using namespace std;

struct Pos {
  int r, c;
};

int bfs(int start_r, int start_c, const vector<string>& grid, int n, int m) {
  vector<vector<int>> dist(n, vector<int>(m, -1));
  dist[start_r][start_c] = 0;

  queue<Pos> q;
  q.push({start_r, start_c});

  int max_dist = 0;
  int dr[4] = {-1, 1, 0, 0};
  int dc[4] = {0, 0, -1, 1};

  while (!q.empty()) {
    Pos cur = q.front();
    q.pop();

    for (int i = 0; i < 4; i++) {
      int nr = cur.r + dr[i];
      int nc = cur.c + dc[i];
      if (nr >= 0 && nr < n && nc >= 0 && nc < m) {
        if (grid[nr][nc] == 'L' && dist[nr][nc] == -1) {
          dist[nr][nc] = dist[cur.r][cur.c] + 1;
          max_dist = max(max_dist, dist[nr][nc]);
          q.push({nr, nc});
        }
      }
    }
  }

  return max_dist;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);

  int n, m;
  cin >> n >> m;
  vector<string> grid(n);

  for (int i = 0; i < n; i++) {
    cin >> grid[i];
  }

  int answer = 0;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      if (grid[i][j] == 'L') {
        int dist = bfs(i, j, grid, n, m);
        answer = max(answer, dist);
      }
    }
  }

  cout << answer << "\n";
  return 0;
}

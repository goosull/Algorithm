#include <bits/stdc++.h>
using namespace std;

static const int INF = 1e9;

int N;
int W[11][11];
bool visited[11];
int ans = INF;

void dfs(int start, int curr, int depth, int cost) {
  if (depth == N) {
    if (W[curr][start] != 0) {
      ans = min(ans, cost + W[curr][start]);
    }
    return;
  }

  for (int next = 0; next < N; next++) {
    if (!visited[next] && W[curr][next] != 0) {
      visited[next] = true;
      dfs(start, next, depth + 1, cost + W[curr][next]);
      visited[next] = false;
    }
  }
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cin >> N;
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
      cin >> W[i][j];
    }
  }

  for (int i = 0; i < N; i++) {
    visited[i] = true;
    dfs(i, i, 1, 0);
    visited[i] = false;
  }

  cout << ans << "\n";
  return 0;
}

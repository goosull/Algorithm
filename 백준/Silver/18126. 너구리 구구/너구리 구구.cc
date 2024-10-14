#include <iostream>
#include <string>
#include <vector>
using namespace std;

int n;
int vis[5001];
long long dist[5001];
vector<pair<int, int>> G[5001];

void dfs(int x, long long w) {
  vis[x] = 1;
  for (auto &[nxtN, nxtW] : G[x]) {
    if (!vis[nxtN]) {
      dist[nxtN] = w + nxtW;
      dfs(nxtN, dist[nxtN]);
    }
  }
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  cin >> n;

  for (int i = 0; i < n - 1; i++) {
    long long a, b, c;
    cin >> a >> b >> c;

    G[a].push_back({b, c});
    G[b].push_back({a, c});
  }
  dfs(1, 0);

  long long ans = 0;
  for (int i = 1; i <= n; i++) {
    ans = max(ans, dist[i]);
  }

  cout << ans;
}

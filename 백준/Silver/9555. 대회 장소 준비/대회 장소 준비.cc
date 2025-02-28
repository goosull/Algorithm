#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n, m;
    cin >> n >> m;

    vector<vector<int>> v(n, vector<int>(m));
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < m; j++) {
        cin >> v[i][j];
      }
    }

    vector<bool> flag(101, false);

    for (int i = 0; i < n; i++) {
      for (int j = 0; j < m; j++) {
        if (v[i][j] == -1) continue;
        for (int k = -1; k <= 1; k++) {
          for (int l = -1; l <= 1; l++) {
            if (k == 0 && l == 0) continue;
            int ni = i + k, nj = j + l;
            if (ni < 0 || ni >= n || nj < 0 || nj >= m) continue;
            if (v[ni][nj] == v[i][j]) {
              flag[v[i][j]] = true;
            }
          }
        }
      }
    }

    int ans = 0;
    for (int i = 1; i <= 100; i++) {
      if (flag[i]) ans++;
    }

    cout << ans << '\n';
  }
  return 0;
}

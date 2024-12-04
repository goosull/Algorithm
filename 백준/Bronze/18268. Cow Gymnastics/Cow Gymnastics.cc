#include <bits/stdc++.h>
using namespace std;

int n, k, ans;
vector<vector<int>> v;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  cin >> n >> k;

  v.resize(n);

  for (int i = 0; i < n; i++) {
    v[i].resize(k);
    for (int j = 1; j < k + 1; j++) {
      int temp;
      cin >> temp;
      v[i][temp - 1] = j;
    }
  }

  for (int i = 0; i < k; i++) {
    for (int j = 0; j < k; j++) {
      if (i == j) continue;
      bool flag = true;
      for (int l = 0; l < n; l++) {
        if (v[l][i] >= v[l][j]) {
          flag = false;
          break;
        }
      }
      if (flag) {
        ans++;
      }
    }
  }
  cout << ans;
  return 0;
}

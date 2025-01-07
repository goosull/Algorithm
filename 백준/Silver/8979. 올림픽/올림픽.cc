#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);

  int n, k;
  cin >> n >> k;

  vector<vector<int>> v;

  for (int i = 0; i < n; i++) {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    v.push_back({b, c, d, a});
  }

  sort(v.rbegin(), v.rend());

  for (int i = 0; i < n; i++) {
    if (v[i][3] == k) {
      while (i > 0) {
        if (v[i][0] == v[i - 1][0] && v[i][1] == v[i - 1][1] &&
            v[i][2] == v[i - 1][2]) {
          i--;
        } else {
          break;
        }
      }
      cout << i + 1;
      return 0;
    }
  }
}

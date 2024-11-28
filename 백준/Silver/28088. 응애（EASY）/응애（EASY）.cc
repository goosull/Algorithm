#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  long long n, m, k, ans = 0;
  cin >> n >> m >> k;

  vector<bool> hi(n, false);

  for (int i = 0; i < m; i++) {
    long long temp;
    cin >> temp;
    hi[temp] = true;
  }

  for (int t = 0; t < k; t++) {
    bool changed = false;
    vector<bool> temp = hi;

    for (int j = 0; j < n; j++) {
      bool left, right;
      if (j == 0) {
        left = hi[(j - 1 + n) % n];
        right = hi[j + 1];
      } else if (j == n - 1) {
        left = hi[j - 1];
        right = hi[0];
      } else {
        left = hi[j - 1];
        right = hi[j + 1];
      }

      if (left == right) {
        temp[j] = false;
      } else {
        temp[j] = true;
      }

      if (temp[j] != hi[j]) {
        changed = true;
      }
    }

    hi = temp;

    if (!changed) {
      break;
    }
  }

  for (int i = 0; i < n; i++) {
    if (hi[i]) {
      ans++;
    }
  }

  cout << ans << '\n';
  return 0;
}

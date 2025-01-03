#include <bits/stdc++.h>
using namespace std;

long long mn = LLONG_MAX, mx = LLONG_MIN;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  long long n, m;
  cin >> n;

  vector<long long> real(n);
  for (int i = 0; i < n; i++) {
    cin >> real[i];
  }

  cin >> m;
  vector<long long> dream(m);
  for (int i = 0; i < m; i++) {
    cin >> dream[i];
  }

  bool found = false;

  for (long long i = 0; i < m; i++) {
    if (real[0] == dream[i]) {
      for (long long j = i + 1; j < m; j++) {
        if (real[1] == dream[j]) {
          long long dist = j - i;
          bool valid = true;

          for (long long k = 2; k < n; k++) {
            if (i + dist * k >= m || real[k] != dream[i + dist * k]) {
              valid = false;
              break;
            }
          }

          if (valid) {
            found = true;
            mn = min(mn, dist - 1);
            mx = max(mx, dist - 1);
          }
        }
      }
    }
  }

  if (!found) {
    cout << -1;
  } else {
    cout << mn << ' ' << mx;
  }

  return 0;
}

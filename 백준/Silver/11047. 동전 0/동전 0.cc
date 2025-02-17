#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, k;
  cin >> n >> k;

  vector<int> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  sort(a.rbegin(), a.rend());

  int ans = 0;
  while (k) {
    for (int i = 0; i < n; i++) {
      if (k >= a[i]) {
        k -= a[i];
        ans++;
        break;
      }
    }
  }

  cout << ans << '\n';
  return 0;
}
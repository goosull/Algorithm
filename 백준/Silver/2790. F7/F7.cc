#include <bits/stdc++.h>
using namespace std;

int ans = 1;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  int n;
  cin >> n;

  vector<int> v(n);

  for (int i = 0; i < n; i++) {
    cin >> v[i];
  }

  sort(v.rbegin(), v.rend());
  int first = v[0] + 1;

  for (int i = 1; i < n; i++) {
    if (v[i] + n >= first) {
      ans++;

      first = max(first, v[i] + i + 1);
    }
  }

  cout << ans;

  return 0;
}

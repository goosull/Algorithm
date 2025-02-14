#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  long long a, x;
  cin >> a >> x;
  a = a % 1000000007;

  vector<long long> v;
  v.push_back(a);

  for (int i = 1; i < 64; i++) {
    v.push_back(v[i - 1] * v[i - 1] % 1000000007);
  }

  long long ans = 1;

  while (x > 0) {
    int cnt = 1;

    while ((1LL << cnt) <= x) {
      cnt++;
    }

    x -= (1LL << (cnt - 1));

    ans *= v[cnt - 1];
    ans %= 1000000007;
  }
  cout << ans << '\n';
  return 0;
}
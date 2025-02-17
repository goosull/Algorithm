#include <bits/stdc++.h>
using namespace std;

const long long MOD = 1000000007;
vector<long long> m;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int n;
  cin >> n;

  m.resize(n);
  for (int i = 0; i < n - 1; i++) {
    cin >> m[i];
  }

  vector<long long> dp(n, 0);
  dp[n - 1] = 0;

  for (int i = n - 2; i >= 0; i--) {
    dp[i] = (m[i] % MOD) * (1 + dp[i + 1]) % MOD;
  }

  long long ans = 0;
  for (int i = 0; i < n - 1; i++) {
    ans = (ans + dp[i]) % MOD;
  }

  cout << ans << "\n";
  return 0;
}

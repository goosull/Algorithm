#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int n, k;

  cin >> n >> k;

  vector<vector<long long>> dp(1001, vector<long long>(1001));

  for (int i = 0; i <= n; i++) {
    for (int j = 0; j <= i; j++) {
      if (j == 0 || j == i) {
        dp[i][j] = 1;
      } else {
        dp[i][j] = dp[i - 1][j - 1] + dp[i - 1][j] % 10007;
      }
    }
  }

  cout << dp[n][k] % 10007 << '\n';
  return 0;
}
#include <bits/stdc++.h>
using namespace std;

vector<pair<long long, long long>> dp(41);

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int t;
  cin >> t;

  dp[0] = {1, 0};
  dp[1] = {0, 1};

  for (int i = 2; i < 41; i++) {
    long long first = dp[i - 1].first + dp[i - 2].first;
    long long second = dp[i - 1].second + dp[i - 2].second;
    dp[i] = {first, second};
  }

  while (t--) {
    int n;
    cin >> n;

    cout << dp[n].first << " " << dp[n].second << '\n';
  }
}
#include <bits/stdc++.h>
using namespace std;

vector<int> stair;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int t;
  cin >> t;

  stair.resize(t);
  for (int i = 0; i < t; i++) {
    cin >> stair[i];
  }

  vector<pair<int, int>> dp(t + 1, {0, 0});
  dp[1].first = stair[0];
  dp[2].second = stair[1];
  dp[2].first = stair[0] + stair[1];
  for (int i = 3; i < t + 1; i++) {
    dp[i].first = dp[i - 1].second + stair[i - 1];
    dp[i].second = max(dp[i - 2].first, dp[i - 2].second) + stair[i - 1];
  }

  cout << max(dp[t].first, dp[t].second) << '\n';
}
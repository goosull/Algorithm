#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int n, k;
  cin >> n >> k;

  vector<pair<int, int>> item(n);
  for (int i = 0; i < n; i++) {
    cin >> item[i].first >> item[i].second;
  }

  vector<int> dp(k + 1, 0);

  for (int i = 0; i < n; i++) {
    int weight = item[i].first, value = item[i].second;
    for (int j = k; j >= weight; j--) {
      dp[j] = max(dp[j], dp[j - weight] + value);
    }
  }

  cout << dp[k] << '\n';
}

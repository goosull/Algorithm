#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;
  cin >> n;

  int ans = 1e9;

  string s = "BRONZESILVER";

  vector<pair<int, char>> v;
  for (int j = 0; j < 10; j++) {
    v.push_back({0, s[j]});
  }

  string input;
  cin >> input;

  for (int i = 0; i < n; i++) {
    if (find(s.begin(), s.end(), input[i]) != s.end()) {
      v[find(s.begin(), s.end(), input[i]) - s.begin()].first++;
    }
  }

  for (int i = 0; i < 10; i++) {
    if (v[i].second == 'E' || v[i].second == 'R') {
      ans = min(ans, v[i].first / 2);
    } else {
      ans = min(ans, v[i].first);
    }
  }

  cout << ans << '\n';
  return 0;
}

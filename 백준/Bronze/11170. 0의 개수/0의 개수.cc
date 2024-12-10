#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int t;
  cin >> t;

  while (t > 0) {
    t--;

    int n, m, ans = 0;
    cin >> n >> m;

    for (int i = n; i <= m; i++) {
      string s = to_string(i);
      for (int j = 0; j < s.length(); j++) {
        if (s[j] == '0') ans++;
      }
    }
    cout << ans << '\n';
  }
}

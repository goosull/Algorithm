#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int t;
  cin >> t;

  while (t--) {
    int n;
    string tree;
    cin >> n >> tree;

    for (int i = 0; i < n; i++) {
      int x = 0;
      string s;
      cin >> s;

      if (i > 0) cout << ' ';

      for (int j = 0; j < s.size(); j++) {
        x = x * 2 + 1;
        if (s[j] == '1') x++;

        if (tree[x] != '*') {
          cout << tree[x];
          x = 0;
        }
      }
    }

    cout << '\n';
  }
  return 0;
}

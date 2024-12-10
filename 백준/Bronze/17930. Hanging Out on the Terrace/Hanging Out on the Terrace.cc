#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int l, x, cur = 0, ans = 0;
  cin >> l >> x;

  for (int i = 0; i < x; i++) {
    string s;
    int p;

    cin >> s >> p;

    if (s == "enter") {
      if (l - cur < p) {
        ans++;
      } else {
        cur += p;
      }
    } else if (s == "leave") {
      if (cur < p) {
        ans++;
      } else {
        cur -= p;
      }
    }
  }
  cout << ans;
}

#include <bits/stdc++.h>
using namespace std;

int n, ans;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int a, b;
  cin >> a >> b;
  ans = abs(a - b);

  cin >> n;

  for (int i = 0; i < n; i++) {
    int f;
    cin >> f;

    ans = min(ans, abs(b - f) + 1);
  }

  cout << ans << '\n';
}

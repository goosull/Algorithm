#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n, ans = 1;
  cin >> n;
  for (int i = 0; i < n - 2; i++) {
    int a;
    cin >> a;
    ans = lcm(ans, a);
  }

  cout << ans << '\n';
}

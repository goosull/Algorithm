#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int n;
  cin >> n;

  bool found = false;

  for (int a = 1; a * a <= n; ++a) {
    if (n % a == 0) {
      int c = n / a;

      for (int b = -sqrt(n + 2); b <= sqrt(n + 2); ++b) {
        if (b == 0 || (n + 2) % b != 0) continue;
        int d = -(n + 2) / b;

        if (a * d + b * c == n + 1) {
          cout << a << " " << b << " " << c << " " << d << "\n";
          found = true;
          break;
        }
      }

      if (found) break;
    }
  }

  if (!found) {
    cout << -1 << "\n";
  }

  return 0;
}

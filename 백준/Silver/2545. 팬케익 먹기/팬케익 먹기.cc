#include <bits/stdc++.h>
using namespace std;

long long n, a, b, c, d;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  cin >> n;

  for (long long j = 0; j < n; j++) {
    cin >> a >> b >> c >> d;

    for (long long i = 0; i < d; i++) {
      long long m = max(a, max(b, c));

      if (m == a) {
        a--;
      } else if (m == b) {
        b--;
      } else {
        c--;
      }
    }

    cout << a * b * c << '\n';
  }
}

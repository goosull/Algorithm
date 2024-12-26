#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  long long x, n;

  cin >> x >> n;

  for (long long i = 0; i < n; i++) {
    if (x % 2 == 0) {
      x /= 2;
    } else {
      x = x * 2;
    }

    bitset<32> b = x;
    bitset<32> c = 6;

    b ^= c;

    x = b.to_ulong();
  }
  cout << x << '\n';
  return 0;
}

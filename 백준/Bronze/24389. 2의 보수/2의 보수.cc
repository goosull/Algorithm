#include <bits/stdc++.h>

using namespace std;

int main() {
  int n;
  cin >> n;

  bitset<32> bit = n;
  long long m = ~bit.to_ullong();
  bitset<32> bit2(m + 1);

  int ans = 0;

  for (int i = 0; i < 32; i++) {
    if (bit[i] != bit2[i]) {
      ans++;
    }
  }

  cout << ans << '\n';
}
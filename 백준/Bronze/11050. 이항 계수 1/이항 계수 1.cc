#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n, k;

  cin >> n >> k;

  long long ans = 1;
  for (int i = 0; i < k; i++) {
    ans *= n;
    n--;
  }

  while (k > 0) {
    ans /= k;
    k--;
  }

  cout << ans << '\n';
  return 0;
}
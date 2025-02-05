#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  long long mn, mx;
  cin >> mn >> mx;
  int range = mx - mn + 1;
  vector<bool> Free(range, true);

  for (long long i = 2; i * i <= mx; i++) {
    long long square = i * i;
    long long start = ((mn + square - 1) / square) * square;
    for (long long j = start; j <= mx; j += square) {
      Free[j - mn] = false;
    }
  }

  long long cnt = 0;
  for (int i = 0; i < range; i++) {
    if (Free[i]) cnt++;
  }

  cout << cnt << "\n";
  return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;
  cin >> n;

  vector<int> size(6);
  for (int i = 0; i < 6; i++) {
    cin >> size[i];
  }

  int t, p;
  cin >> t >> p;

  int tsum = 0;
  for (int i = 0; i < 6; i++) {
    tsum += size[i] / t + 1;
    if (size[i] % t == 0) tsum--;
  }

  cout << tsum << '\n' << n / p << " " << n % p << '\n';
  return 0;
}
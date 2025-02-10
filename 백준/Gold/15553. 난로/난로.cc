#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n, k;
  cin >> n >> k;

  if (k >= n) {
    cout << n << '\n';
    return 0;
  }

  vector<long long> f;
  for (int i = 0; i < n; i++) {
    long long x;
    cin >> x;
    f.push_back(x);
  }

  long long total = f[n - 1] - f[0] + 1;
  vector<long long> gap(n - 1);
  for (int i = 0; i < n - 1; i++) {
    gap[i] = f[i + 1] - f[i] - 1;
  }
  sort(gap.rbegin(), gap.rend());

  long long sum = 0;
  for (int i = 0; i < k - 1; i++) {
    sum += gap[i];
  }

  total -= sum;

  cout << total << '\n';
}

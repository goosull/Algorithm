#include <bits/stdc++.h>
using namespace std;

long long n, k;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cin >> n >> k;

  vector<long long> v(n);

  cin >> v[0];
  for (long long i = 1; i < n; i++) {
    cin >> v[i];
    v[i] += v[i - 1];
  }

  sort(v.rbegin(), v.rend());

  long long ans = 0;
  for (long long i = 0; i < k; i++) {
    ans += v[i];
  }

  cout << ans << '\n';
}
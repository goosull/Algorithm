#include <bits/stdc++.h>

using namespace std;

long long n, sum, ans;
const int MOD = 1000000007;
vector<long long> a;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  cin >> n;
  a.resize(n);

  for (int i = 0; i < n; i++) {
    cin >> a[i];
    ans = (ans + (sum * a[i])) % MOD;
    sum += a[i];
  }

  cout << ans << '\n';
}

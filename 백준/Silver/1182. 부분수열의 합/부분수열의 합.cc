#include <bits/stdc++.h>

using namespace std;

long long n, m, ans;
vector<long long> v;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  cin >> n >> m;

  v.resize(n);

  for (int i = 0; i < n; i++) {
    cin >> v[i];
  }

  for (int i = 1; i < pow(2, n); i++) {
    long long sum = 0;
    for (int j = 0; j < n; j++) {
      if (i & (1 << j)) {
        sum += v[j];
      }
    }

    if (sum == m) {
      ans++;
    }
  }

  cout << ans << '\n';
}

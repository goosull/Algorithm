#include <bits/stdc++.h>
using namespace std;

long long n, d;
vector<long long> v(3);

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  cin >> n;

  for (long long j = 0; j < n; j++) {
    cin >> v[0] >> v[1] >> v[2] >> d;

    sort(v.begin(), v.end());

    long long firstminussecond = v[2] - v[1];
    long long secondminusthird = v[1] - v[0];
    long long firstminusthird = v[2] - v[0];

    if (firstminussecond >= d) {
      cout << (v[2] - d) * v[1] * v[0] << '\n';
    } else if (firstminusthird + secondminusthird >= d) {
      v[2] -= firstminussecond;
      d -= firstminussecond;
      if (d % 2 == 0) {
        cout << (v[2] - d / 2) * (v[1] - d / 2) * v[0] << '\n';
      } else {
        cout << (v[2] - d / 2) * (v[1] - d / 2 - 1) * v[0] << '\n';
      }
    } else {
      v[2] -= firstminusthird;
      v[1] -= secondminusthird;
      d -= (firstminusthird + secondminusthird);
      if (d % 3 == 0) {
        cout << (v[2] - d / 3) * (v[1] - d / 3) * (v[0] - d / 3) << '\n';
      } else if (d % 3 == 1) {
        cout << (v[2] - d / 3) * (v[1] - d / 3) * (v[0] - d / 3 - 1) << '\n';
      } else {
        cout << (v[2] - d / 3) * (v[1] - d / 3 - 1) * (v[0] - d / 3 - 1)
             << '\n';
      }
    }
  }
}

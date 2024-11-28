#include <bits/stdc++.h>
using namespace std;

double minimum = 1e9;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int n;
  cin >> n;

  vector<double> v(n);

  for (int i = 0; i < n; i++) {
    cin >> v[i];
  }

  sort(v.begin(), v.end());

  for (int i = 0; i < n; i++) {
    if (v[i] / (i + 1) > 1) {
      cout << "impossible\n";
      return 0;
    }

    if (v[i] / (i + 1) < minimum) {
      minimum = v[i] / (i + 1);
    }
  }

  cout.precision(10);
  cout << minimum << '\n';
}

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int n;
  cin >> n;

  vector<int> v(5005, 0);
  v[3] = 1;
  v[5] = 1;
  for (int i = 6; i < 5005; i++) {
    if (v[i - 3] != 0 && v[i - 5] != 0) {
      v[i] = min(v[i - 5] + 1, v[i - 3] + 1);
    } else if (v[i - 3] != 0) {
      v[i] = v[i - 3] + 1;
    } else if (v[i - 5] != 0) {
      v[i] = v[i - 5] + 1;
    }
  }

  cout << (v[n] != 0 ? v[n] : -1);
}
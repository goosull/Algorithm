#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  vector<long long> ink(n);
  vector<long long> jum(n);

  for (int i = 0; i < n; i++) {
    cin >> ink[i];
  }

  for (int i = 0; i < n; i++) {
    cin >> jum[i];
  }

  for (int i = 0; i < n; i++) {
    int l = i + 1;
    int r = n - 1;
    int pos = i;

    while (l <= r) {
      int mid = (l + r) / 2;
      if (jum[mid] <= ink[i]) {
        pos = mid;
        l = mid + 1;
      } else {
        r = mid - 1;
      }
    }

    cout << pos - i << '\n';
  }
}
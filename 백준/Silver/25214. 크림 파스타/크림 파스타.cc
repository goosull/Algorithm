#include <bits/stdc++.h>

using namespace std;

long long n, m, minidx;
vector<long long> v;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  cin >> n;

  v.resize(n);

  for (int i = 0; i < n; i++) {
    cin >> v[i];

    if (m < v[i] - v[minidx]) {
      m = v[i] - v[minidx];
    }

    cout << m << ' ';

    if (v[i] < v[minidx]) {
      minidx = i;
    }
  }
}

#include <bits/stdc++.h>

using namespace std;

vector<tuple<long long, int, int>> v;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;
  cin >> n;

  for (int i = 0; i < 62; i++) {
    for (int j = i; j < 62; j++) {
      long long value = (1LL << i) + (1LL << j);
      v.push_back({value, i, j});
    }
  }

  sort(v.begin(), v.end());

  for (int i = 0; i < n; i++) {
    long long m;
    cin >> m;

    if (m <= get<0>(v[0])) {
      cout << get<1>(v[0]) << " " << get<2>(v[0]) << "\n";
      continue;
    }

    for (int j = 1; j < v.size(); j++) {
      if (get<0>(v[j]) >= m) {
        long long diff1 = get<0>(v[j]) - m;
        long long diff2 = m - get<0>(v[j - 1]);
        if (diff1 < diff2)
          cout << get<1>(v[j]) << " " << get<2>(v[j]) << "\n";
        else
          cout << get<1>(v[j - 1]) << " " << get<2>(v[j - 1]) << "\n";
        break;
      }
    }
  }
  return 0;
}
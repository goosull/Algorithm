#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int n;
  cin >> n;

  vector<pair<int, int>> v(10001, {0, 0});

  for (int i = 0; i < 10001; i++) {
    v[i].first = i;
  }

  for (int i = 0; i < n; i++) {
    int temp;
    cin >> temp;

    v[temp].second++;
  }

  sort(v.begin(), v.end());

  for (int i = 0; i < 10001; i++) {
    for (int j = 0; j < v[i].second; j++) {
      cout << v[i].first << '\n';
    }
  }
}
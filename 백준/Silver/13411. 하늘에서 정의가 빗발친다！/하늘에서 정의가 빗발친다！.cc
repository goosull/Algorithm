#include <bits/stdc++.h>

using namespace std;

vector<pair<long double, int>> para;
int n;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  cin >> n;
  para.resize(n);

  for (int i = 0; i < n; i++) {
    int x, y, v;
    cin >> x >> y >> v;

    para[i] = {sqrt(x * x + y * y) / v, i + 1};
  }

  sort(para.begin(), para.end());

  for (int i = 0; i < n; i++) {
    cout << para[i].second << '\n';
  }
}

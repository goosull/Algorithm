#include <bits/stdc++.h>

using namespace std;

int n, pos, cur, cnt;
vector<int> v;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  cin >> n;

  v.resize(n);

  for (int i = 0; i < n; i++) {
    cin >> v[i];
    cur += v[i];
    if (cur < 0) {
      if (pos == -1) pos = i;
    } else if (pos != -1) {
      cnt += 2 * (i - pos);
      pos = -1;
    }
    cnt++;
  }

  cout << cnt << '\n';
}

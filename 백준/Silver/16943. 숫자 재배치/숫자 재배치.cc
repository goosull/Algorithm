#include <bits/stdc++.h>
using namespace std;

string ans;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  string a, b;
  cin >> a >> b;

  sort(a.begin(), a.end());
  int ans = -1;

  do {
    if (stoi(a) < stoi(b) && a[0] != '0') {
      ans = max(ans, stoi(a));
    }
  } while (next_permutation(a.begin(), a.end()));

  cout << ans << '\n';
}
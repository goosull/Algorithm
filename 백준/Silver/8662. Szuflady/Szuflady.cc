#include <bits/stdc++.h>
using namespace std;

vector<long long> drawer;
long long ans;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int n;
  cin >> n;

  for (int i = 0; i < n; i++) {
    long long temp;
    cin >> temp;
    drawer.push_back(temp);
  }

  for (int i = n - 2; i > -1; i--) {
    if (drawer[i] >= drawer[i + 1]) {
      ans++;
      drawer[i] = drawer[i + 1] - 1;
      if (drawer[i] < 1) {
        cout << -1 << '\n';
        return 0;
      }
    }
  }

  cout << ans << '\n';
  return 0;
}
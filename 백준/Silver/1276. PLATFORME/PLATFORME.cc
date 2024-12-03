#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> platform;
int ans;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int n;
  cin >> n;

  platform.resize(n);

  for (int i = 0; i < n; i++) {
    int y, x1, x2;
    cin >> y >> x1 >> x2;
    platform[i] = {y, x1, x2};
  }

  sort(platform.begin(), platform.end());

  for (int i = 0; i < n; i++) {
    int y = platform[i][0], x1 = platform[i][1], x2 = platform[i][2];
    int left_support = y, right_support = y;

    for (int j = i - 1; j >= 0; j--) {
      int ny = platform[j][0], nx1 = platform[j][1], nx2 = platform[j][2];

      if (x1 + 0.5 > nx1 && nx2 > x1 + 0.5) {
        left_support = min(left_support, y - ny);
      }

      if (x2 - 0.5 > nx1 && nx2 > x2 - 0.5) {
        right_support = min(right_support, y - ny);
      }
    }

    ans += left_support + right_support;
  }

  cout << ans << '\n';
  return 0;
}

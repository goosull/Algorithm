#include <iostream>
#include <vector>

using namespace std;

vector<int> s;
int l, r, cnt, ans;

int main() {
  ios_base ::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int n, k;
  cin >> n >> k;

  for (int i = 0; i < n; i++) {
    int temp;
    cin >> temp;

    s.push_back(temp);
  }

  while (r < n) {
    if (s[r] % 2 != 0) {
      cnt++;
    }
    while (cnt > k) {
      if (s[l] % 2 != 0) {
        cnt--;
      }
      l++;
    }
    ans = max(ans, r - l + 1 - cnt);
    r++;
  }

  cout << ans;
}

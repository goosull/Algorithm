#include <iostream>
#include <vector>

using namespace std;

vector<int> c, d, ans;

int main() {
  ios_base ::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  string a, b;
  cin >> a;
  for (int i = 0; i < a.size(); i++) {
    c.push_back(a[a.size() - i - 1] - '0');
  }

  cin >> b;
  for (int i = 0; i < b.size(); i++) {
    d.push_back(b[b.size() - i - 1] - '0');
  }

  int up = 0;

  for (int i = 0; i < max(b.size(), a.size()); i++) {
    if (c.size() < d.size() && c.size() <= i) {
      if (d[i] + up >= 10) {
        ans.push_back(d[i] + up - 10);
        up = 1;
      } else {
        ans.push_back(d[i] + up);
        up = 0;
      }
    } else if (c.size() > d.size() && d.size() <= i) {
      if (c[i] + up >= 10) {
        ans.push_back(c[i] + up - 10);
        up = 1;
      } else {
        ans.push_back(c[i] + up);
        up = 0;
      }
    } else if (c[i] + d[i] + up >= 10) {
      ans.push_back(c[i] + d[i] + up - 10);
      up = 1;
    } else {
      ans.push_back(c[i] + d[i] + up);
      up = 0;
    }
  }

  if (up == 1) {
    ans.push_back(1);
  }

  for (int i = 0; i < ans.size(); i++) {
    cout << ans[ans.size() - i - 1];
  }
}

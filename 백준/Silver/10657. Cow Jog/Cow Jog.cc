#include <iostream>
#include <vector>

using namespace std;

vector<int> sp;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int n, ans = 0;
  cin >> n;
  for (int i = 0; i < n; i++) {
    int p, s;
    cin >> p >> s;
    sp.push_back(s);
  }
  for (int i = 0; i < n; i++) {
    bool flag = true;
    int temp = sp[i];
    for (int j = i; j < n; j++) {
      if (temp > sp[j]) {
        flag = false;
        break;
      }
    }
    if (flag) {
      ans++;
    }
  }
  cout << ans;
}

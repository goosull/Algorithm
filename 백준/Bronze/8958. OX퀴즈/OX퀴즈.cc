#include <iostream>
using namespace std;

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);
  std::cout.tie(NULL);

  int n;
  cin >> n;

  for (int i = 0; i < n; i++) {
    string temp;
    cin >> temp;
    int cnt = 0, ans = 0;

    for (int j = 0; j < temp.length(); j++) {
      if (temp[j] == 'O') {
        ans += ++cnt;
      } else {
        cnt = 0;
      }
    }

    cout << ans << '\n';
  }
}

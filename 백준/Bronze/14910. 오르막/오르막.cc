#include <iostream>

using namespace std;

int n, m = 2 << 30;

int main() {
  ios_base ::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  string ans = "Good";

  while (cin >> n) {
    if (n < m) {
      ans = "Bad";
    }

    m = n;
  }

  cout << ans << '\n';

  return 0;
}

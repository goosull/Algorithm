#include <iostream>
using namespace std;

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);
  std::cout.tie(NULL);

  int t;
  cin >> t;

  for (int i = 0; i < t; i++) {
    int h, w, n;
    cin >> h >> w >> n;

    int f = n % h;
    int l = n / h;
    l = f == 0 ? l : l + 1;
    f = f == 0 ? h : f;

    if (l > 9) {
      cout << f << l << '\n';
    } else {
      cout << f << 0 << l << '\n';
    }
  }
}

#include <iostream>
using namespace std;

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);
  std::cout.tie(NULL);

  double a, b;
  cin >> a >> b;

  double ans = a / b;
  cout.precision(12);
  cout << ans;
  return 0;
}

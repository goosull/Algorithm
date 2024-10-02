#include <cmath>
#include <iostream>
using namespace std;

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);
  std::cout.tie(NULL);

  double pi = 3.14159265358979323846;

  long long a;
  cin >> a;

  long double ans = sqrt(a) * sqrt(pi) * 2;
  cout.precision(15);
  cout << ans;
}
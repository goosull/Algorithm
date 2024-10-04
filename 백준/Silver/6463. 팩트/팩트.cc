#include <cmath>
#include <iostream>
using namespace std;

long long fact(int n) {
  int ans = 1;
  for (int i = n; i > 0; i--) {
    ans *= i;
    while (ans % 10 == 0) {
      ans /= 10;
    }
    ans %= 10000;
  }

  return ans % 10;
}

int main() {
  // std::ios_base::sync_with_stdio(false);
  // std::cin.tie(NULL);
  // std::cout.tie(NULL);

  int n;
  while (scanf("%d", &n) != EOF) {
    printf("%5d -> %d\n", n, fact(n));
  }
  return 0;
}
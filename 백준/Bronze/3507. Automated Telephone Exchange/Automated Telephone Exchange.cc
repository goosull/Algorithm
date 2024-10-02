#include <cmath>
#include <iostream>
using namespace std;

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);
  std::cout.tie(NULL);

  int n;
  cin >> n;
  if (n >= 200) {
    cout << 0;
    return 0;
  }

  cout << 199 - n;
  return 0;
}
#include <iostream>
using namespace std;

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);
  std::cout.tie(NULL);

  int a, b;
  cin >> a >> b;

  if (a > b) {
    cout << ">";
  } else if (a < b) {
    cout << "<";
  } else if (a == b) {
    cout << "==";
  }
  return 0;
}

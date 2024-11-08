#include <iostream>
#include <vector>

using namespace std;

int main() {
  ios_base ::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  long long a, b, c;

  while (cin >> a >> b >> c) {
    if (a == 0 && b == 0 && c == 0) {
      break;
    }
    if (a == 0 && b == 0) {
      cout << 0 << '\n';
      continue;
    }
    for (long long i = 0; i < c; i++) {
      int temp = a + b;
      a = b;
      b = temp;
    }

    cout << b << '\n';
  }
}

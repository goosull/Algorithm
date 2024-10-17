#include <iostream>
#include <sstream>
#include <string>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int m, n, i, j, c;

  cin >> m >> n >> i >> j >> c;

  if (m % 2 == 0 || n % 2 == 0) {
    cout << "equal";
    return 0;
  }

  if ((i % 2 == 0 && j % 2 == 0) || (i % 2 == 1 && j % 2 == 1)) {
    if (c == 1) {
      cout << "white";
      return 0;
    } else {
      cout << "black";
      return 0;
    }
  } else {
    if (c == 1) {
      cout << "black";
      return 0;
    } else {
      cout << "white";

      return 0;
    }
  }
}

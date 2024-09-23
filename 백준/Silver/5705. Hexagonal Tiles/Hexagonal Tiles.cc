#include <iostream>
#include <vector>
using namespace std;

int fibo[45];

int fi(int a) {
  if (fibo[a]) {
    return fibo[a];
  }
  int temp = fi(a - 1) + fi(a - 2);
  fibo[a] = temp;
  return temp;
}

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);
  std::cout.tie(NULL);

  fibo[0] = 1;
  fibo[1] = 2;
  while (1) {
    int n;

    cin >> n;
    if (n == 0) {
      return 0;
    }

    cout << fi(n - 1) << '\n';
  }
}

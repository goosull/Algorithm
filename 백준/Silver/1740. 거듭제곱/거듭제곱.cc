#include <iostream>
#include <vector>
using namespace std;

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);
  std::cout.tie(NULL);

  unsigned long long int n, ans = 0;

  cin >> n;

  vector<int> bin;

  while (n > 0) {
    bin.push_back(n % 2);
    n /= 2;
  }

  for (int i = 0; i < bin.size(); i++) {
    unsigned long long int temp = 1;
    for (int j = 0; j < i; j++) {
      temp *= 3;
    }
    ans += bin[i] * temp;
  }

  cout << ans;
  return 0;
}
#include <iostream>
using namespace std;

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);
  std::cout.tie(NULL);
  int temp;
  cin >> temp;
  string in;
  unsigned long long int a = 0;
  unsigned long long int c = 0;
  unsigned long long int g = 0;
  unsigned long long int t = 0;
  cin >> in;

  for (int i = 0; i < in.size(); i++) {
    if (in[i] == 'A') a++;
    if (in[i] == 'C') c++;
    if (in[i] == 'G') g++;
    if (in[i] == 'T') t++;
  }

  long long int ans = a * c % 1000000007;
  ans = ans * g % 1000000007;
  ans = ans * t % 1000000007;

  cout << ans;
}

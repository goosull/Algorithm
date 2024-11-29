#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  long long a, b;
  cin >> a >> b;

  cout << (a + b) * (abs(a - b) + 1) / 2;

  return 0;
}

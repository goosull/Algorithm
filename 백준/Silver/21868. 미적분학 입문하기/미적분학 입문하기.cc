#include <bits/stdc++.h>
using namespace std;

int en, ed, a1, a0, x;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  cin >> en >> ed >> a1 >> a0 >> x;

  cout << a1 * x + a0 << '\n';

  if (a1 == 0) {
    cout << "0 0\n";
    return 0;
  }

  cout << en << " " << ed * abs(a1) << '\n';
}

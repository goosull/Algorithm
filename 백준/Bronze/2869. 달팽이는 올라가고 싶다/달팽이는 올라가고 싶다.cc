#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int a, b, v;

  cin >> a >> b >> v;

  if (((v - a) % (a - b)) == 0) {
    cout << ((v - a) / (a - b)) + 1 << '\n';
  } else {
    cout << ((v - a) / (a - b)) + 2 << '\n';
  }

  return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  vector<long long> man(n);
  for (int i = 0; i < n; i++) {
    cin >> man[i] >> man[i] >> man[i];
  }

  man[2] += man[0];
  for (int i = 3; i < n; i++) {
    man[i] += max(man[i - 2], man[i - 3]);
  }

  cout << max(man[n - 2], man[n - 1]);
}

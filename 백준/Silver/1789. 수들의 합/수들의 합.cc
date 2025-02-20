#include <bits/stdc++.h>
using namespace std;

vector<long long> v(10000001);

int main() {
  long long n;
  cin >> n;

  for (int i = 1; i <= 10000000; i++) {
    v[i] = v[i - 1] + i;
    if (v[i] > n) {
      cout << i - 1;
      return 0;
    }
  }
}
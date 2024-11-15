#include <bits/stdc++.h>

using namespace std;

long long n, ans = 1, cnt;

long long combination(long long n, long long r) {
  if (r == 0 || n == r) return 1;
  if (r == 1) return n;
  return combination(n - 1, r - 1) + combination(n - 1, r);
}

long long factorial(long long n) {
  if (n == 0) return 1;
  return n * factorial(n - 1);
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  cin >> n;

  while (n > 0) {
    ans *= combination(n, 2);
    n -= 2;
    cnt++;
    ans /= cnt;
  }

  cout << ans << '\n';
}

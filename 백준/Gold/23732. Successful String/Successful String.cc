#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int n;
  cin >> n;
  string s;
  cin >> s;

  long long total = (long long)n * (n + 1) / 2;
  long long cnt_f = 0;

  int start = 0;
  for (int i = 1; i <= n; i++) {
    if (i == n || s[i] == s[i - 1]) {
      int length = i - start;
      cnt_f += (long long)length * (length + 1) / 2;
      start = i;
    }
  }

  cout << total - cnt_f << "\n";
  return 0;
}
#include <bits/stdc++.h>
using namespace std;

long long n, ans;

void dfs(string s, int l, bool odd) {
  if (s.length() > (l + 1) / 2) return;

  string revs = s;
  if (odd) revs.pop_back();
  reverse(revs.begin(), revs.end());

  string palindrome = s + revs;

  if (palindrome.length() < 1) return;
  long long num = stoll(palindrome);
  if (num > n) return;
  ans++;

  for (char c = '0'; c <= '9'; c++) {
    dfs(s + c, l, odd);
  }
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  cin >> n;
  string strn = to_string(n);

  for (bool odd : {true, false}) {
    for (char c = '1'; c <= '9'; c++) {
      dfs(string(1, c), strn.size(), odd);
    }
  }

  cout << ans << '\n';
  return 0;
}

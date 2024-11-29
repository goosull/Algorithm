#include <bits/stdc++.h>
using namespace std;

long long gcd(long long a, long long b) { return b == 0 ? a : gcd(b, a % b); }

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int n, t = 0;
  while (cin >> n) {
    if (n == 0) break;

    vector<pair<long long, long long>> v(n, {0, 1});
    long long ansint = 0, ansnum = 0, ansden = 1;

    for (int i = 0; i < n; i++) {
      string s;
      cin >> s;

      if (s.find(',') != string::npos) {
        ansint += stoi(s.substr(0, s.find(',')));
        s = s.substr(s.find(',') + 1);
      }

      if (s.find('/') == string::npos) {
        ansint += stoi(s);
      } else {
        v[i].first = stoi(s.substr(0, s.find('/')));
        v[i].second = stoi(s.substr(s.find('/') + 1));
      }
    }

    for (int i = 0; i < n; i++) {
      ansnum = ansnum * v[i].second + ansden * v[i].first;
      ansden *= v[i].second;
      long long g = gcd(abs(ansnum), ansden);
      ansnum /= g;
      ansden /= g;
    }

    ansint += ansnum / ansden;
    ansnum %= ansden;

    cout << "Test " << ++t << ": ";
    if (!ansint && !ansnum) cout << 0;
    if (ansint) cout << ansint;
    if (ansint && ansnum) cout << ',';
    if (ansnum) cout << ansnum << '/' << ansden;
    cout << '\n';
  }

  return 0;
}

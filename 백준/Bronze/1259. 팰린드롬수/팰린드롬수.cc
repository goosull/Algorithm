#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  string s;
  while (cin >> s) {
    if (s == "0") return 0;

    string rev;

    for (int i = s.length() - 1; i >= 0; i--) {
      rev += s[i];
    }

    if (rev == s) {
      cout << "yes\n";
    } else {
      cout << "no\n";
    }
  }
}
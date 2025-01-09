#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);

  int n;
  cin >> n;

  set<string> word;

  for (int i = 0; i < n; i++) {
    string s;
    cin >> s;

    bool flag = true;

    for (int j = 0; j < s.length(); j++) {
      if (word.count(s)) {
        flag = false;
        break;
      }

      char first = s[0];
      s.erase(0, 1);
      s.push_back(first);
    }

    if (flag) word.insert(s);
  }

  cout << word.size();
}

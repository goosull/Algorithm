#include <bits/stdc++.h>
using namespace std;

// int: 언어 번호, first: 마지막에 나온 사람의 번호, second: 최대 거리
unordered_map<int, pair<int, long long>> lang;
long long ans = 1e11;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int n;
  cin >> n;

  for (int i = 1; i <= n; i++) {
    int m;
    cin >> m;

    if (lang.find(m) == lang.end()) {
      lang[m] = {i, 1e11};
    } else {
      lang[m].second = min(lang[m].second, (long long)i - lang[m].first);
      lang[m].first = i;

      ans = min(ans, lang[m].second);
    }
  }

  cout << (ans == 1e11 ? n : ans) << "\n";
}

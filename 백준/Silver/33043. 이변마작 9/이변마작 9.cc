#include <bits/stdc++.h>
using namespace std;

int ans = 1e9;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  int n;
  cin >> n;

  map<string, queue<int>> card;

  for (int i = 0; i < n; i++) {
    string s;
    cin >> s;

    card[s].push(i);

    if (card[s].size() > 4) {
      ans = min(ans, i - card[s].front() + 1);
      card[s].pop();
    }
  }

  cout << (ans == 1e9 ? -1 : ans) << "\n";
}

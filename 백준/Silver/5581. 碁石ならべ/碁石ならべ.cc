#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int n, ans = 0;
  vector<pair<int, int>> board;

  cin >> n;

  for (int i = 1; i <= n; i++) {
    int dol;
    cin >> dol;

    if (i % 2 == 1) {
      if (!board.empty() && board.back().first == dol)
        board.back().second++;
      else
        board.push_back({dol, 1});
    } else if (board.back().first == dol) {
      board.back().second++;
    } else {
      int cnt = 1;

      while (!board.empty() && board.back().first != dol) {
        cnt += board.back().second;
        board.pop_back();
      }

      if (!board.empty() && board.back().first == dol) {
        board.back().second += cnt;
      } else {
        board.push_back({dol, cnt});
      }
    }
  }

  for (int i = 0; i < board.size(); i++) {
    if (board[i].first == 0) {
      ans += board[i].second;
    }
  }

  cout << ans << '\n';
}

#include <bits/stdc++.h>

using namespace std;

int n, m;
vector<pair<int, int>> hand;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  cin >> n >> m;

  hand.resize(m * 2);

  for (int i = 1; i <= m; i++) {
    int temp;
    cin >> temp;

    hand[(i - 1) * 2] = {temp, i};

    cin >> temp;
    hand[(i - 1) * 2 + 1] = {temp, i};
  }

  sort(hand.begin(), hand.end());

  cout << hand[(n - 1) % (m * 2)].second << '\n';
}

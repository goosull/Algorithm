#include <bits/stdc++.h>

using namespace std;

vector<pair<int, int>> exam;
int n, m, s;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  cin >> n >> m >> s;

  exam.push_back({0, 0});
  exam.push_back({s, 0});

  for (int i = 0; i < n; i++) {
    int b, t;
    cin >> b >> t;
    exam.push_back({b, t});
  }

  sort(exam.begin(), exam.end());

  for (int i = 0; i < n + 1; i++) {
    if (exam[i + 1].first - (exam[i].first + exam[i].second) >= m) {
      cout << exam[i].first + exam[i].second;
      return 0;
    }
  }

  cout << -1;
  return 0;
}

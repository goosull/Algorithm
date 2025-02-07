#include <iostream>
#include <unordered_set>
#include <vector>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int N, M;
  cin >> N >> M;

  vector<int> chosen;
  bool found = false;

  for (int i = 0; i < M; i++) {
    int k;
    cin >> k;
    vector<int> clause(k);
    bool conflict = false;
    unordered_set<int> litSet;

    for (int j = 0; j < k; j++) {
      cin >> clause[j];
      int lit = clause[j];
      if (litSet.find(-lit) != litSet.end()) {
        conflict = true;
      }
      litSet.insert(lit);
    }

    if (!conflict && !found) {
      chosen = clause;
      found = true;
    }
  }

  if (!found) {
    cout << "NO\n";
    return 0;
  }

  vector<int> ans(N + 1, 0);
  for (int lit : chosen) {
    if (lit > 0) {
      ans[lit] = 0;
    } else {
      ans[-lit] = 1;
    }
  }

  cout << "YES\n";
  for (int i = 1; i <= N; i++) {
    cout << ans[i] << (i == N ? "\n" : " ");
  }

  return 0;
}

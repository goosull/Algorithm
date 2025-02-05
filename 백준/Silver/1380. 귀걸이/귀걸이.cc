#include <bits/stdc++.h>
using namespace std;

unordered_map<int, int> seen;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int time = 0;

  while (true) {
    int n;
    cin >> n;
    if (!n) break;
    time++;

    vector<string> student(n);
    vector<bool> stat(n, false);
    cin.ignore();

    for (int i = 0; i < n; i++) {
      getline(cin, student[i]);
    }

    for (int i = 0; i < 2 * n - 1; i++) {
      int a;
      char b;
      cin >> a >> b;

      stat[a - 1] = !stat[a - 1];
    }

    for (int i = 0; i < n; i++) {
      if (stat[i]) {
        cout << time << " " << student[i] << "\n";
      }
    }
  }

  return 0;
}
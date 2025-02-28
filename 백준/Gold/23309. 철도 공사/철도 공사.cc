#include <bits/stdc++.h>
using namespace std;

struct station {
  int next;
  int prev;
};

vector<station> stations(1000001);

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int n, m;
  cin >> n >> m;

  vector<int> ids(n);
  for (int j = 0; j < n; j++) {
    cin >> ids[j];
  }

  for (int j = 0; j < n - 1; j++) {
    stations[ids[j]].next = ids[j + 1];
    stations[ids[j + 1]].prev = ids[j];
  }
  stations[ids[0]].prev = ids[n - 1];
  stations[ids[n - 1]].next = ids[0];

  for (int i = 0; i < m; i++) {
    string cmd;
    cin >> cmd;

    if (cmd == "BN") {
      int target, newid;
      cin >> target >> newid;

      cout << stations[target].next << '\n';

      stations[stations[target].next].prev = newid;
      stations[newid].next = stations[target].next;

      stations[target].next = newid;
      stations[newid].prev = target;
    } else if (cmd == "BP") {
      int target, newid;
      cin >> target >> newid;

      cout << stations[target].prev << '\n';

      stations[stations[target].prev].next = newid;
      stations[newid].prev = stations[target].prev;

      stations[target].prev = newid;
      stations[newid].next = target;
    } else if (cmd == "CN") {
      int target;
      cin >> target;

      cout << stations[target].next << '\n';

      stations[stations[stations[target].next].next].prev = target;
      stations[target].next = stations[stations[target].next].next;
    } else if (cmd == "CP") {
      int target;
      cin >> target;

      cout << stations[target].prev << '\n';

      stations[stations[stations[target].prev].prev].next = target;
      stations[target].prev = stations[stations[target].prev].prev;
    }
  }
}

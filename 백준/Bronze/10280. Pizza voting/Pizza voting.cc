#include <bits/stdc++.h>
using namespace std;

int n, m;
int alice, bob, me;
vector<pair<int, string>> pizza;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  cin >> n >> m;

  alice = bob = me = n / 3;

  if (n % 3 == 0) {
    me--;
  } else if (n % 3 == 2) {
    alice++;
  }

  if (n - m >= alice && m > bob) {
    cout << "YES\n";
  } else {
    cout << "NO\n";
  }
}

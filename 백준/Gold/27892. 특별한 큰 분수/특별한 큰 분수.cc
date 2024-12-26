#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  long long x, n;
  cin >> x >> n;

  map<long long, long long> index_map;
  vector<long long> sequence;

  for (long long i = 0; i < n; i++) {
    if (index_map.count(x)) {
      long long cycle_start = index_map[x];
      long long cycle_length = sequence.size() - cycle_start;

      long long cycle_position = (n - cycle_start) % cycle_length;
      cout << sequence[cycle_start + cycle_position] << '\n';
      return 0;
    }

    index_map[x] = sequence.size();
    sequence.push_back(x);

    if (x % 2 == 0) {
      x /= 2;
    } else {
      x = x * 2;
    }
    x ^= 6;
  }

  cout << x << '\n';
  return 0;
}

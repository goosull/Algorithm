#include <bits/stdc++.h>
using namespace std;

struct Event {
  long long temp;
  int type;
};

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int N;
  long long X, Y, Z;
  cin >> N >> X >> Y >> Z;

  vector<Event> events;
  events.reserve(2 * N);
  for (int i = 0; i < N; i++) {
    long long A, B;
    cin >> A >> B;
    events.push_back({A, +1});
    events.push_back({B + 1, -1});
  }

  sort(events.begin(), events.end(), [](const Event &a, const Event &b) {
    if (a.temp == b.temp) return a.type < b.type;
    return a.temp < b.temp;
  });

  long long cur = (long long)N * X;
  long long max = cur;

  for (Event &e : events) {
    if (e.type == +1) {
      cur += (Y - X);
    } else {
      cur += (Z - Y);
    }
    max = std::max(max, cur);
  }

  cout << max << '\n';

  return 0;
}

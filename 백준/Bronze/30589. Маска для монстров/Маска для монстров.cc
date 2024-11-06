#include <cmath>
#include <iostream>

using namespace std;

long double ans;
long double m;

int main() {
  ios_base ::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int n;
  cin >> n;

  long double ax, ay, bx, by;
  cin >> bx >> by;

  long double sx = bx, sy = by;

  for (int i = 0; i < n; i++) {
    ax = bx;
    ay = by;

    cin >> bx >> by;

    m = max(m, sqrt((ax - bx) * (ax - bx) + (ay - by) * (ay - by)));

    ans += sqrt((ax - bx) * (ax - bx) + (ay - by) * (ay - by));
  }

  m = max(m, sqrt((sx - bx) * (sx - bx) + (sy - by) * (sy - by)));
  ans += sqrt((sx - bx) * (sx - bx) + (sy - by) * (sy - by));

  ans -= m;

  cout.precision(10);
  cout << ans << '\n';

  return 0;
}

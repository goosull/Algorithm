#include <iostream>

using namespace std;

double a, b, c;
double a2, b2, c2;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  cin >> a >> b >> c >> a2 >> b2 >> c2;

  double rate = 999999;

  rate = min(rate, min(a / a2, min(b / b2, c / c2)));

  cout.precision(10);

  cout << a - rate * a2 << " " << b - rate * b2 << " " << c - rate * c2;
}
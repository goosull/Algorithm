#include <bits/stdc++.h>
using namespace std;

long long minimum, maximum;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  long long n;
  cin >> n;

  maximum = n * 6;
  minimum = (n % 6 == 0) ? n / 6 : n / 6 + (7 - n % 6);

  cout << minimum << " " << maximum << '\n';
}

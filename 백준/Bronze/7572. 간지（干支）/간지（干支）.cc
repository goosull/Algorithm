#include <bits/stdc++.h>
using namespace std;

char iji[12] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L'};
int gan[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int N;
  cin >> N;

  int diff = (N - 4 + 60) % 60;

  cout << iji[diff % 12] << gan[diff % 10] << '\n';
}

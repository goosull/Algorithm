#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int n;
  cin >> n;
  priority_queue<long long, vector<long long>, greater<long long>> card;
  for (int i = 0; i < n; i++) {
    long long temp;
    cin >> temp;
    card.push(temp);
  }

  long long ans = 0;
  while (card.size() > 1) {
    long long a = card.top();
    card.pop();
    long long b = card.top();
    card.pop();
    ans += a + b;
    card.push(a + b);
  }

  cout << ans << '\n';
}
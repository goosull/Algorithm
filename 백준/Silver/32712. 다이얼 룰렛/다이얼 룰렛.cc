#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int n;
  long long k;
  cin >> n >> k;
  vector<long long> arr(n);
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }

  long long ans = 0;
  long long clock_score = 0;
  int limit = min(n, (int)k);
  for (int i = 0; i < limit; i++) {
    ans = max(ans, clock_score + (k - i) * arr[i]);
    clock_score += arr[i];
  }

  reverse(arr.begin(), arr.end());
  long long counter_clock_score = 0;
  for (int i = 0; i < limit; i++) {
    ans = max(ans, counter_clock_score + (k - i) * arr[i]);
    counter_clock_score += arr[i];
  }

  cout << ans << "\n";
  return 0;
}
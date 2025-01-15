#include <bits/stdc++.h>
using namespace std;

vector<pair<long long, long long>> ans;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  long long n;
  cin >> n;

  if (n == 0) {
    cout << 10 << '\n';
    return 0;
  }

  for (long long i = 2; i < 11; i++) {
    long long temp = n;
    long long cnt = 0;
    vector<long long> digit;
    while (temp > 0) {
      digit.push_back(temp % i);
      temp /= i;
    }

    for (long long j = 0; j < digit.size() - 1; j++) {
      if (digit[j] != digit[j + 1]) {
        cnt++;
      }
    }

    ans.push_back({cnt, i});
  }

  sort(ans.begin(), ans.end(),
       [](pair<long long, long long> a, pair<long long, long long> b) {
         if (a.first == b.first) {
           return a.second > b.second;
         }
         return a.first < b.first;
       });

  cout << ans[0].second << '\n';
  return 0;
}

#include <bits/stdc++.h>
using namespace std;

const int MOD = 1'000'000'007;

int N, M;
vector<long long> dance;
vector<vector<long long>> dp;

long long count(int pos, int flag) {
  if (pos == N) return 1;

  if (dp[pos][flag] != -1) return dp[pos][flag];

  if (flag == 1) {
    dp[pos][flag] = (count(pos + 1, 1) * dance[pos]) % MOD;
  } else {
    dp[pos][flag] = (count(pos + 1, 1) * (M - dance[pos]) % MOD +
                     count(pos + 1, 0) * dance[pos] % MOD) %
                    MOD;
  }
  return dp[pos][flag];
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  cin >> N >> M;
  dance.resize(N);

  for (int i = 0; i < N; i++) {
    long long a, b;
    cin >> a >> b;

    if (b == 0) {
      dance[i] = 1;
    } else {
      dance[i] = M - 1;
    }
  }

  dp.assign(N, vector<long long>(2, -1));

  cout << count(0, 0) << '\n';

  return 0;
}

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int N, K;
  cin >> N >> K;

  vector<long long> bag1(N), bag2(N);
  for (int i = 0; i < N; i++) cin >> bag1[i];
  for (int i = 0; i < N; i++) cin >> bag2[i];

  long long totalA = 0, totalB = 0;
  for (int i = 0; i < N; i++) {
    totalA += bag1[i];
    totalB += bag2[i];
  }

  vector<long long> prefixA(N + 1, 0), prefixB(N + 1, 0);
  vector<long long> suffixA(N + 1, 0), suffixB(N + 1, 0);

  for (int i = 1; i <= N; i++) {
    prefixA[i] = prefixA[i - 1] + bag1[i - 1];
    prefixB[i] = prefixB[i - 1] + bag2[i - 1];
    suffixA[i] = suffixA[i - 1] + bag1[N - i];
    suffixB[i] = suffixB[i - 1] + bag2[N - i];
  }

  vector<long long> removeA(K + 1), removeB(K + 1);

  removeA[0] = totalA;
  removeB[0] = totalB;

  for (int r = 1; r <= K; r++) {
    long long bestA = LLONG_MAX;
    long long bestB = LLONG_MAX;

    for (int i = 0; i <= r; i++) {
      if (i <= N && (r - i) <= N) {
        long long removed = prefixA[i] + suffixA[r - i];
        long long remain = totalA - removed;
        bestA = min(bestA, remain);
      }
    }
    removeA[r] = bestA;

    for (int i = 0; i <= r; i++) {
      if (i <= N && (r - i) <= N) {
        long long removed = prefixB[i] + suffixB[r - i];
        long long remain = totalB - removed;
        bestB = min(bestB, remain);
      }
    }
    removeB[r] = bestB;
  }

  long long ans = LLONG_MAX;
  for (int r = 0; r <= K; r++) {
    long long cand = max(removeA[r], removeB[K - r]);
    ans = min(ans, cand);
  }

  cout << ans << "\n";

  return 0;
}

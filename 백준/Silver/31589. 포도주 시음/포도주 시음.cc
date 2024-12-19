#include <bits/stdc++.h>
using namespace std;

long long ans;
vector<long long> wine;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int N, K;
  cin >> N >> K;

  for (int i = 0; i < N; i++) {
    long long w;
    cin >> w;
    wine.push_back(w);
  }

  sort(wine.begin(), wine.end());

  if (K % 2 == 1) {
    for (int i = N - 1; i >= N - K / 2 - 1; i--) {
      ans += wine[i];
    }
    for (int i = 0; i < K / 2; i++) {
      ans -= wine[i];
    }
  } else {
    for (int i = N - 1; i >= N - K / 2; i--) {
      ans += wine[i];
    }
    for (int i = 0; i < K / 2 - 1; i++) {
      ans -= wine[i];
    }
  }

  cout << ans << '\n';
}

#include <bits/stdc++.h>
using namespace std;

int ans;
long long w, h;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  long long w, h;
  cin >> w >> h;
  w--;
  h--;

  vector<pair<long long, long long>> wv;
  vector<pair<long long, long long>> hv;

  for (long long i = 0; i <= w; i++) {
    if (sqrt(w * w - i * i) == (long long)sqrt(w * w - i * i)) {
      wv.push_back({i, (long long)sqrt(w * w - i * i)});
      if (sqrt(w * w - i * i) != 0 && i != 0) {
        wv.push_back({i, -(long long)sqrt(w * w - i * i)});
      }
    }
  }

  for (long long i = 0; i <= h; i++) {
    if (sqrt(h * h - i * i) == (long long)sqrt(h * h - i * i)) {
      hv.push_back({i, (long long)sqrt(h * h - i * i)});
      if (sqrt(h * h - i * i) != 0 && i != 0) {
        hv.push_back({i, -(long long)sqrt(h * h - i * i)});
      }
    }
  }

  for (int i = 0; i < wv.size(); i++) {
    for (int j = 0; j < hv.size(); j++) {
      // 두 벡터가 수직인지 확인
      if (wv[i].first * hv[j].first + wv[i].second * hv[j].second == 0) {
        ans++;
      }
    }
  }

  if (w == h) {
    ans /= 2;
  }
  cout << ans;
}
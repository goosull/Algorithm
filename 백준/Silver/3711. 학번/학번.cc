#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

vector<long long> st(301);

long long find(int g) {
  vector<int> rm;

  for (int i = 1; i < 1000000; i++) {
    for (long long j = 0; j < g; j++) {
      if (find(rm.begin(), rm.end(), st[j] % i) != rm.end()) {
        break;
      } else {
        rm.push_back(st[j] % i);
      }
    }
    if (rm.size() == g) {
      return i;
    }
    rm.clear();
  }
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int n;
  cin >> n;
  for (int i = 0; i < n; i++) {
    int g;
    cin >> g;
    for (int j = 0; j < g; j++) {
      long long value;
      cin >> value;
      st.push_back(value);
    }

    long long ans = find(g);

    cout << ans << '\n';
    st.clear();
  }
}

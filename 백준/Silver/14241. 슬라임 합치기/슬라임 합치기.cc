#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

vector<int> v;
int ans;

int main() {
  ios_base ::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int n;
  cin >> n;

  for (int i = 0; i < n; i++) {
    int a;
    cin >> a;
    v.push_back(a);
  }

  sort(v.rbegin(), v.rend());

  int temp = v[0];

  for (int i = 0; i < n - 1; i++) {
    ans += temp * v[i + 1];
    temp = temp + v[i + 1];
  }

  cout << ans << '\n';
}

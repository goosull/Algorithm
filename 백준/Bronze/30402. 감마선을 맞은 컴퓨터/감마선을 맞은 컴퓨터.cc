#include <bits/stdc++.h>
using namespace std;

vector<char> v;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  for (int i = 0; i < 225; i++) {
    char c;
    cin >> c;

    v.push_back(c);
  }

  if (find(v.begin(), v.end(), 'w') != v.end()) {
    cout << "chunbae" << '\n';
  } else if (find(v.begin(), v.end(), 'b') != v.end()) {
    cout << "nabi" << '\n';
  } else if (find(v.begin(), v.end(), 'g') != v.end()) {
    cout << "yeongcheol" << '\n';
  }

  return 0;
}

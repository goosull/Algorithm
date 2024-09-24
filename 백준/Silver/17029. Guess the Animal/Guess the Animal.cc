#include <algorithm>
#include <iostream>
#include <map>
#include <vector>
using namespace std;

int ans = 0;

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);
  std::cout.tie(NULL);

  int n;
  vector<string> props[101];

  cin >> n;

  for (int i = 0; i < n; i++) {
    string temp;
    cin >> temp;
    int np;
    cin >> np;
    for (int j = 0; j < np; j++) {
      string temp2;
      cin >> temp2;
      props[i].push_back(temp2);
    }
  }

  for (int i = 0; i < n; i++) {
    for (int j = i + 1; j < n; j++) {
      int cnt = 0;
      for (int k = 0; k < props[i].size(); k++) {
        for (int l = 0; l < props[j].size(); l++) {
          if (props[i][k] == props[j][l]) cnt++;
        }
      }

      // 최대값 업데이트
      ans = max(ans, cnt + 1);
    }
  }

  cout << ans << endl;

  return 0;
}

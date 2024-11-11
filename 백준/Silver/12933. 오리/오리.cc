#include <iostream>
#include <vector>

using namespace std;

string s;
vector<string> cnt;
int count;
int ans;

int main() {
  ios_base ::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  cin >> s;

  for (int i = 0; i < s.size(); i++) {
    int flag = 0;
    if (s[i] == 'q') {
      cnt.push_back("q");
      count++;
      flag = 1;
    }
    if (s[i] == 'u') {
      for (int j = 0; j < cnt.size(); j++) {
        if (cnt[j].back() == 'q') {
          cnt[j].push_back('u');
          flag = 1;
          break;
        }
      }
    }
    if (s[i] == 'a') {
      for (int j = 0; j < cnt.size(); j++) {
        if (cnt[j].back() == 'u') {
          cnt[j].push_back('a');
          flag = 1;
          break;
        }
      }
    }
    if (s[i] == 'c') {
      for (int j = 0; j < cnt.size(); j++) {
        if (cnt[j].back() == 'a') {
          cnt[j].push_back('c');
          flag = 1;
          break;
        }
      }
    }
    if (s[i] == 'k') {
      for (int j = 0; j < cnt.size(); j++) {
        if (cnt[j].back() == 'c') {
          count--;
          flag = 1;
          cnt[j].push_back('k');
          break;
        }
      }
    }

    if (!flag) {
      cout << -1;
      return 0;
    }
    ans = max(ans, count);
  }
  for (int i = 0; i < cnt.size(); i++) {
    if (cnt[i].back() != 'k') {
      cout << -1;
      return 0;
    }
  }
  cout << ans;
  return 0;
}

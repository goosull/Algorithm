#include <bits/stdc++.h>
using namespace std;

int n, m;
unordered_set<string> recognized_extensions;

bool _sort(const pair<string, string>& a, const pair<string, string>& b) {
  if (a.first != b.first) return a.first < b.first;
  bool a_recognized = recognized_extensions.count(a.second);
  bool b_recognized = recognized_extensions.count(b.second);
  if (a_recognized != b_recognized) return a_recognized > b_recognized;
  return a.second < b.second;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  cin >> n >> m;

  vector<pair<string, string>> files(n);

  for (int i = 0; i < n; i++) {
    string full_name;
    cin >> full_name;
    int pos = full_name.find('.');
    files[i] = {full_name.substr(0, pos), full_name.substr(pos + 1)};
  }

  for (int i = 0; i < m; i++) {
    string ext;
    cin >> ext;
    recognized_extensions.insert(ext);
  }

  sort(files.begin(), files.end(), _sort);

  for (const auto& file : files) {
    cout << file.first << '.' << file.second << '\n';
  }

  return 0;
}
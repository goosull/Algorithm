#include <bits/stdc++.h>
using namespace std;

string ans;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  map<string, char> m;
  m.insert({".-", 'A'});
  m.insert({"-...", 'B'});
  m.insert({"-.-.", 'C'});
  m.insert({"-..", 'D'});
  m.insert({".", 'E'});
  m.insert({"..-.", 'F'});
  m.insert({"--.", 'G'});
  m.insert({"....", 'H'});
  m.insert({"..", 'I'});
  m.insert({".---", 'J'});
  m.insert({"-.-", 'K'});
  m.insert({".-..", 'L'});
  m.insert({"--", 'M'});
  m.insert({"-.", 'N'});
  m.insert({"---", 'O'});
  m.insert({".--.", 'P'});
  m.insert({"--.-", 'Q'});
  m.insert({".-.", 'R'});
  m.insert({"...", 'S'});
  m.insert({"-", 'T'});
  m.insert({"..-", 'U'});
  m.insert({"...-", 'V'});
  m.insert({".--", 'W'});
  m.insert({"-..-", 'X'});
  m.insert({"-.--", 'Y'});
  m.insert({"--..", 'Z'});
  m.insert({".----", '1'});
  m.insert({"..---", '2'});
  m.insert({"...--", '3'});
  m.insert({"....-", '4'});
  m.insert({".....", '5'});
  m.insert({"-....", '6'});
  m.insert({"--...", '7'});
  m.insert({"---..", '8'});
  m.insert({"----.", '9'});
  m.insert({"-----", '0'});
  m.insert({"--..--", ','});
  m.insert({".-.-.-", '.'});
  m.insert({"..--..", '?'});
  m.insert({"---...", ':'});
  m.insert({"-....-", '-'});
  m.insert({".--.-.", '@'});

  int n;
  cin >> n;

  for (int i = 0; i < n; i++) {
    string s;
    cin >> s;

    ans += m[s];
  }

  cout << ans << '\n';

  return 0;
}

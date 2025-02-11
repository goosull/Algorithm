#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  string a, b, c;

  cin >> a >> b >> c;

  int ans;

  if (a != "Fizz" && a != "Buzz" && a != "FizzBuzz") {
    ans = stoi(a) + 3;
  }
  if (b != "Fizz" && b != "Buzz" && b != "FizzBuzz") {
    ans = stoi(b) + 2;
  }
  if (c != "Fizz" && c != "Buzz" && c != "FizzBuzz") {
    ans = stoi(c) + 1;
  }

  if (ans % 3 == 0 && ans % 5 == 0) {
    cout << "FizzBuzz";
  } else if (ans % 3 == 0) {
    cout << "Fizz";
  } else if (ans % 5 == 0) {
    cout << "Buzz";
  } else {
    cout << ans;  
  }
}
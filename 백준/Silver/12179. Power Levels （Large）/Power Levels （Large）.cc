#include <cmath>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<int> calculate_multifactorial_digits(int max_exclamations) {
  vector<int> digits(max_exclamations + 1, 0);
  long long num = 9000;
  for (int e = 1; e <= max_exclamations; e++) {
    long double log_sum = 0;
    for (long long i = 9000; i > 0; i -= e) {
      log_sum += log10(i);
    }
    digits[e] = (int)log_sum + 1;
  }
  return digits;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  const int MAX_EXCLAMATIONS = 9000;
  vector<int> multifactorial_digits =
      calculate_multifactorial_digits(MAX_EXCLAMATIONS);

  int n;
  cin >> n;

  for (int i = 0; i < n; i++) {
    int t;
    cin >> t;

    string result = "...";
    for (int e = 1; e <= MAX_EXCLAMATIONS; e++) {
      if (multifactorial_digits[e] < t) {
        result = "IT'S OVER 9000";
        result += string(e, '!');
        break;
      }
    }

    cout << "Case #" << i + 1 << ": " << result << '\n';
  }

  return 0;
}

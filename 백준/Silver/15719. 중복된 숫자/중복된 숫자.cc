#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
  ios_base ::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  long long n;
  cin >> n;

  vector<long long> num;

  for (long long i = 0; i < n; i++) {
    int temp;
    cin >> temp;
    num.push_back(temp);
  }

  sort(num.begin(), num.end());

  for (long long i = 0; i < n; i++) {
    if ((i + 1) != num[i]) {
      cout << i;
      break;
    }
  }

  return 0;
}

#include <bits/stdc++.h>
using namespace std;

int n, q, offset;
vector<long long> arr, prefix;

void sum(int a, int b) {
  int start = (a + offset) % n;
  int end = (b + offset) % n;

  if (start <= end) {
    cout << prefix[end] - prefix[start] + arr[start];
  } else {
    cout << prefix[n - 1] - prefix[start] + arr[start] + prefix[end];
  }
  cout << '\n';
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cin >> n >> q;

  arr.resize(n);
  prefix.resize(n);

  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }

  prefix[0] = arr[0];
  for (int i = 1; i < n; i++) {
    prefix[i] = prefix[i - 1] + arr[i];
  }

  for (int i = 0; i < q; i++) {
    int a, b, c;
    cin >> a;
    if (a == 3) {
      cin >> b >> c;
      sum(b - 1, c - 1);
    } else if (a == 1) {
      cin >> b;
      offset = (offset - b + n) % n;
    } else if (a == 2) {
      cin >> b;
      offset = (offset + b) % n;
    }
  }
}
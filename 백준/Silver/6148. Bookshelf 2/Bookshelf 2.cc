#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

vector<int> h;
int n, b;
int min_excess = 1e9;

void find(int idx, int current) {
  if (current >= b) {
    min_excess = min(min_excess, current - b);
  }

  if (idx >= n) return;

  find(idx + 1, current);
  find(idx + 1, current + h[idx]);
}

int main() {
  scanf("%d %d", &n, &b);

  for (int i = 0; i < n; i++) {
    int height;
    scanf("%d", &height);
    h.push_back(height);
  }

  find(0, 0);

  printf("%d\n", min_excess);

  return 0;
}
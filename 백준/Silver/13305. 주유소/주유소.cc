#include <iostream>
#include <vector>
using namespace std;

int n;

int main() {
  scanf("%d", &n);
  vector<int> road(n - 1), cost(n);

  for (int i = 0; i < n - 1; i++) {
    scanf("%d", &road[i]);
  }

  for (int i = 0; i < n; i++) {
    scanf("%d", &cost[i]);
  }

  int current = 0, next = 0;
  long long ans = 0;
  while (current < n) {
    next = current + 1;
    while (next < n && cost[current] <= cost[next]) {
      next++;
    }
    int distance = 0;
    for (int i = current; i < next; i++) {
      distance += road[i];
    }
    ans += distance * cost[current];
    current = next;
  }

  printf("%lld\n", ans);
}

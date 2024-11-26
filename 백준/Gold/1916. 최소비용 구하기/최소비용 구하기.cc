#include <bits/stdc++.h>
using namespace std;

int n, m;
vector<pair<int, int>> city[1001];

vector<long long> dijkstra(int start) {
  vector<long long> dist(n + 1, LLONG_MAX);
  dist[start] = 0;
  priority_queue<pair<int, int>> pq;
  pq.push({0, start});

  while (!pq.empty()) {
    int cost = -pq.top().first;
    int cur = pq.top().second;
    pq.pop();

    if (dist[cur] < cost) continue;

    for (int i = 0; i < city[cur].size(); i++) {
      int next = city[cur][i].first;
      int nextCost = city[cur][i].second + cost;

      if (dist[next] > nextCost) {
        dist[next] = nextCost;
        pq.push({-nextCost, next});
      }
    }
  }

  return dist;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  cin >> n >> m;

  for (int i = 0; i < m; i++) {
    int a, b, c;
    cin >> a >> b >> c;
    city[a].push_back({b, c});
  }

  int s, e;
  cin >> s >> e;

  vector<long long> dist = dijkstra(s);

  cout << dist[e] << '\n';
}

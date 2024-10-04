#include <iostream>
#include <vector>
using namespace std;

int main() {
  int n, m;
  int dir[4][2] = {{1, 0}, {0, 1}, {-1, 0}, {0, -1}};

  scanf("%d %d", &n, &m);
  vector<vector<int>> spin(n, vector<int>(m, 0));

  int x = 0, y = 0, d = 0;
  for (int i = 1; i <= n * m; i++) {
    spin[x][y] = i;
    int nx = x + dir[d][0];
    int ny = y + dir[d][1];
    if (nx < 0 || nx >= n || ny < 0 || ny >= m || spin[nx][ny] != 0) {
      d = (d + 1) % 4;
      nx = x + dir[d][0];
      ny = y + dir[d][1];
    }
    x = nx;
    y = ny;
  }
  printf("%d %d\n", x - dir[d][0], y - dir[d][1]);
}
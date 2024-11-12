#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

vector<int> time;
int n, s, m;

bool canEatAll(int mid) {
  long long total = 0;
  for (int i = 0; i < m; i++) {
    total += mid / time[i] + 1;
    if (total >= (n - s))
      return true;  // 충분한 소보루를 먹었다면 더 계산할 필요 없음
  }
  return total >= (n - s);
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  cin >> n >> s >> m;
  time.resize(m);

  for (int i = 0; i < m; i++) {
    cin >> time[i];
  }

  int left = 0, right = 1e9, last_time = 0;
  while (left <= right) {
    int mid = (left + right) / 2;
    if (canEatAll(mid)) {
      right = mid - 1;
      last_time = mid;
    } else {
      left = mid + 1;
    }
  }
  int eaten = 0;
  int last_person = -1;

  // cout << "last_time: " << last_time << '\n';

  while (eaten < (n - s)) {
    for (int i = 0; i <= last_time; i++) {
      for (int j = 0; j < m; j++) {
        if (i % time[j] == 0) {
          eaten++;
          if (eaten == (n - s)) {
            last_person = j + 1;
            break;
          }
        }
      }
    }
  }

  cout << last_person << '\n';
  return 0;
}

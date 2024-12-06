#include <iostream>
#include <stack>
using namespace std;

int main() {
  int n;
  cin >> n;

  stack<pair<int, int>>
      table;  // 스택으로 연속된 색상과 개수를 저장 (색상, 개수)

  for (int i = 0; i < n; ++i) {
    int c;
    cin >> c;

    if (i % 2 == 0) {
      // 홀수 번째 돌은 그냥 추가
      if (!table.empty() && table.top().first == c) {
        // 같은 색상이면 개수 증가
        table.top().second++;
      } else {
        // 새로운 색상을 추가
        table.push({c, 1});
      }
    } else {
      // 짝수 번째 돌
      if (!table.empty() && table.top().first == c) {
        // 같은 색상이면 개수 증가
        table.top().second++;
      } else {
        // 색상이 다를 경우
        int old_count = 0;

        // 연속된 같은 색 돌 제거
        while (!table.empty() && table.top().first != c) {
          old_count += table.top().second;
          table.pop();
        }

        // 새로운 색상 돌 추가 (old_count + 1)
        if (!table.empty() && table.top().first == c) {
          table.top().second += old_count + 1;
        } else {
          table.push({c, old_count + 1});
        }
      }
    }
  }

  // 테이블에 남아있는 흰 돌(0)의 개수 계산
  int whiteCount = 0;
  while (!table.empty()) {
    if (table.top().first == 0) {
      whiteCount += table.top().second;
    }
    table.pop();
  }

  cout << whiteCount << endl;
  return 0;
}

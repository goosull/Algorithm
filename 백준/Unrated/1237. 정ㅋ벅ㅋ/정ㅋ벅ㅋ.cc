#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

string U[260];

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);
  std::cout.tie(NULL);

  int N, M;

  int open = false;

  cout << "문제의 정답";

  // cin >> N;

  // for (int i = 0; i < N; i++) {
  //   cin >> U[i];
  // }

  // cin >> M;

  // for (int i = 0; i < M; i++) {
  //   string T;
  //   cin >> T;

  //   string *temp;
  //   temp = find(U, U + 260, T);

  //   if (temp == U + 260) {
  //     cout << "Unknown " << T << '\n';
  //   } else {
  //     if (open) {
  //       cout << "Closed by " << T << '\n';
  //     } else {
  //       cout << "Opened by " << T << '\n';
  //     }
  //     open = !open;
  //   }
  // }
}

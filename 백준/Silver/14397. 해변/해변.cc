#include <iostream>
#include <vector>
using namespace std;

// 지도 크기
int N, M;

// 방향 이동 정의 (짝수 행, 홀수 행에서 이동하는 방식이 다름)
int even_dy[] = {-1, 0, 0, 1, 1, 1};
int even_dx[] = {0, 1, -1, 1, 0, -1};
int odd_dy[] = {-1, -1, -1, 0, 0, 1};
int odd_dx[] = {-1, 0, 1, -1, 1, 0};

// 좌표가 유효한지 확인하는 함수
bool is_valid(int x, int y) {
    return x >= 0 && x < N && y >= 0 && y < M;
}

int main() {
    cin >> N >> M;
    vector<string> grid(N);

    // 지도 입력 받기
    for (int i = 0; i < N; ++i) {
        cin >> grid[i];
    }

    int beach_length = 0;

    // 해변의 길이 계산
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < M; ++j) {
            if (grid[i][j] == '#') {  // 현재 타일이 땅인 경우
                // 짝수 행과 홀수 행에 따라 인접한 타일을 확인
                if (i % 2 == 0) {
                    for (int d = 0; d < 6; ++d) {
                        int ni = i + odd_dx[d];
                        int nj = j + odd_dy[d];
                        if (is_valid(ni, nj) && grid[ni][nj] == '.') {
                            beach_length++;
                        }
                    }
                } else {
                    for (int d = 0; d < 6; ++d) {
                        int ni = i + even_dx[d];
                        int nj = j + even_dy[d];
                        if (is_valid(ni, nj) && grid[ni][nj] == '.') {
                            beach_length++;
                        }
                    }
                }
            }
        }
    }

    // 결과 출력
    cout << beach_length << endl;

    return 0;
}

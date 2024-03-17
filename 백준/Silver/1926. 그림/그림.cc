#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int image[500][500] = { 0, };
bool visited[500][500] = {0,};
int dy[] = { 0,0,1,-1 };
int dx[] = { 1,-1,0,0 };
int N, M;
int s = 1;
vector <int> v;

void recur(int y, int x) {
	visited[y][x] = true;

	for (int i = 0; i < 4; i++) {
		int nx = x + dx[i];
		int ny = y + dy[i];

		if (ny < 0 || nx < 0 || ny >= N || nx >= M)  
			continue;
		if (image[ny][nx] == 1 && visited[ny][nx] == 0) {
			s++;
			recur(ny, nx);
		}
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> N >> M;

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			int a;
			cin >> image[i][j];
		}
	}

	int cnt = 0;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			if (image[i][j] == 1 && visited[i][j] == 0) {
				recur(i, j);
				v.push_back(s);
				cnt++;
				s = 1;
			}
		}
	}

	sort(v.rbegin(), v.rend());

	cout << cnt << endl;

	if (cnt == 0) {
		cout << 0 << endl;
	}
	else {
		cout << v[0] << endl;
	}
}

#include <iostream>
#include <vector>

using namespace std;

vector <int> node[505];
bool visited[505] = {0,};
int answer[505];

void DFS(int len, int i) {
	if (len == 2) {
		return;
	}

	visited[i] = 1;

	for (int j = 0; j < node[i].size(); j++) {
		int next = node[i][j];
		if (!visited[next]) {
			answer[next] = 1;
			DFS(len+1, next);
		}
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, m;
	cin >> n >> m;

	for (int i = 0; i < m-1; i++) {
		int a, b;
		cin >> a >> b;
		node[a].push_back(b);
		node[b].push_back(a);
	}

	DFS(0,1);

	int count = 0;

	for (int i = 0; i < 505; i++) {
		count += answer[i];
	}

	cout << count;
}
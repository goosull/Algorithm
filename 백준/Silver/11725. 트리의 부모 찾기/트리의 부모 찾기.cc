#include <iostream>
#include <vector>

using namespace std;

vector <int> node[100005];
int answer[100005] = { 0, };
bool visited[100005] = {0,};

void DFS(int i) {
	visited[i] = 1;

	for (int j = 0; j < node[i].size(); j++) {
		int next = node[i][j];
		if (!visited[next]) {
			answer[next] = i;
			DFS(next);
		}
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, counter = 0;
	cin >> n;

	for (int i = 0; i < n-1; i++) {
		int a, b;
		cin >> a >> b;
		node[a].push_back(b);
		node[b].push_back(a);
	}

	DFS(1);

	for (int i = 2; i < n + 1; i++) {
		cout << answer[i] << '\n';
	}
}
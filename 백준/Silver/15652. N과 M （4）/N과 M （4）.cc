#include <iostream>

using namespace std;

int N, M, Num[8], Ans[8];
int visited[8] {0,};

void rec(int len) {
	if (len == M) {
		for (int i = 0; i < M; i++) {
			cout << Num[Ans[i]] <<' ';
		}
		cout << '\n';
		return;
	}
	for (int i = 0; i < N; i++) {
		if (visited[i] != M && Ans[len-1] <= i) {
			visited[i]++;
			Ans[len] = i;
			rec(len + 1);
			visited[i] = 0;
		}
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> N >> M;

	for (int i = 0; i < N; i++) {
		Num[i] = i+1;
	}

	rec(0);
}

#include <iostream>
#include <cmath>

using namespace std;

int T, n;


int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> T;

	for (int i = 0; i < T; i++) {
		int cx, cy, r;
		int answer = 0;
		int x1, y1, x2, y2;
		cin >> x1 >> y1 >> x2 >> y2 >> n;

		for (int j = 0; j < n; j++) {
			cin >> cx >> cy >> r;
			if (pow(x1 - cx, 2) + pow(y1 - cy, 2) < r*r && pow(x2 - cx, 2) + pow(y2 - cy, 2) > r*r) answer++;
			else if (pow(x1 - cx, 2) + pow(y1 - cy, 2) > r*r && pow(x2 - cx, 2) + pow(y2 - cy, 2) < r*r) answer++;
		}
		cout << answer << '\n';
	}
}

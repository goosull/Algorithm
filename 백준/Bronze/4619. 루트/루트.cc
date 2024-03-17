#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int a, n;
	cin >> a >> n;
	while (a != 0 && n != 0) {
		int answer = 0;
		for (int i = 1; pow(i-1,n) < 1000000; i++) {
			if (abs(pow(answer,n) - a) > abs(a - pow(i, n))) {
				answer = i;
			}
		}
		cout << answer << '\n';
		cin >> a >> n;
	}
}

#include <iostream>
#include <cmath>

using namespace std;;



int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int a;
	char answer = 'N';
	for (int i = 0; i < 10; i++) {
		cin >> a;
		if (a == 1) {
			switch (answer) {
			case 'N':
				answer = 'E';
				break;
			case 'E':
				answer = 'S';
				break;
			case 'S':
				answer = 'W';
				break;
			case 'W':
				answer = 'N';
				break;
			}
		}
		if (a == 2) {
			switch (answer) {
			case 'N':
				answer = 'S';
				break;
			case 'E':
				answer = 'W';
				break;
			case 'S':
				answer = 'N';
				break;
			case 'W':
				answer = 'E';
				break;
			}
		}
		if (a == 3) {
			switch (answer) {
			case 'N':
				answer = 'W';
				break;
			case 'E':
				answer = 'N';
				break;
			case 'S':
				answer = 'E';
				break;
			case 'W':
				answer = 'S';
				break;
			}
		}
	}
	cout << answer;
}

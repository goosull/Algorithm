#include <iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int p, c;
	cin >> p >> c;

	if (p > c) {
		cout << c / 2;
	}
	else if (p <= c) {
		cout << p / 2;
	}
}

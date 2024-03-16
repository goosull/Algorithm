#include <iostream>
#include <cmath>

using namespace std;;



int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int p, c;
	cin >> p >> c;

	if (p > c) {
		cout << 2 * c + 1;
	}
	else if (p <= c) {
		cout << 2 * p - 1;
	}
}

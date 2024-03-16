#include <iostream>
#include <cmath>

using namespace std;;



int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int a, b;
	cin >> a >> b;

	if (a < 2) {
		cout << "Before"; return 0;
	}
	else if (a >= 3) {
		cout << "After"; return 0;
	}
	else {
		if (b < 18) {
			cout << "Before"; return 0;
		}
		else if (b > 18) {
			cout << "After"; return 0;
		}
		else {
			cout << "Special"; return 0;
		}
	}
	return 0;
}

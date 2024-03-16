#include <iostream>
#include <cmath>

using namespace std;;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int a;
	cin >> a;

	for (int i = 0; i < a; i++) {
		for (int j = a - i; j > 1; j--) {
			cout << " ";
		}
		for (int j = 0; j <=i; j++) {
			cout << "*";
		}
		cout << '\n';
	}

}

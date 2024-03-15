	#include <iostream>

	using namespace std;

	int main() {
		ios_base::sync_with_stdio(false);
		cin.tie(NULL);
		cout.tie(NULL);

		int a;
		cin >> a;
		int b = a;
		for (int j = 0; j < b; j++) {
			for (int i = 0; i < a; i++) {
				cout << "*";
			}
			cout << '\n';
			a--;
		}
	}

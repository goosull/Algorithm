	#include <iostream>
	#include <algorithm>

	using namespace std;

	int main() {
		ios_base::sync_with_stdio(false);
		cin.tie(NULL);
		cout.tie(NULL);

		int a, b, c, d;
		cin >> a >> b >> c >> d;
		int answer = a + b + c + d;
		int min = answer / 60;
		int sec = answer % 60;
		cout << min << '\n' << sec;
	}

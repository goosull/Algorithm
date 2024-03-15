#include <iostream>
#include <string>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	string a;
	getline(cin, a, '\n');
	while (a != "#") {
		int answer = 0;
		for (int i = 0; i < a.length(); i++) {
			if (a[i] == 'a' || a[i] == 'e' || a[i] == 'i' || a[i] == 'o' || a[i] == 'u' || a[i] == 'A' || a[i] == 'E' || a[i] == 'I' || a[i] == 'O' || a[i] == 'U') answer++;
		}
		cout << answer << '\n';

		getline(cin, a, '\n');
	}
	return 0;
}

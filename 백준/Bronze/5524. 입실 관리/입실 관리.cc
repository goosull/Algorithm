#include <iostream>
#include <string>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N;
	cin >> N;
	
	for (int i = 0; i < N; i++) {
		string a;
		cin >> a;

		for (int j = 0; j < a.size(); j++) {
			if (a[j] >= 'A' && a[j] <= 'Z') {
				a[j] += 32;
			}
		}
		cout << a << '\n';
	}
}
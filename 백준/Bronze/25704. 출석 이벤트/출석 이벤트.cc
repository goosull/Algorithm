	#include <iostream>

	using namespace std;

	int main() {
		ios_base::sync_with_stdio(false);
		cin.tie(NULL);
		cout.tie(NULL);

		double N, P;
		cin >> N >> P;

		if (N >= 20) {
			cout << max(0,int(min(P * 0.75, P - 2000)));
		}
		else if (N >= 15) {
			cout << max(0,int(min(P * 0.9, P - 2000)));
		}
		else if (N >= 10) {
			cout << max(0,int(min(P * 0.9, P - 500)));
		}
		else if (N >= 5) {
			cout << max(0,int(P - 500));
		}
		else cout << P;
	}

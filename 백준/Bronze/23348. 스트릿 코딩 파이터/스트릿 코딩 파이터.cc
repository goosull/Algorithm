#include <iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	int T[1000] = {0,};

	int a, b, c;
	cin >> a >> b >> c >> n;
	
	for (int i = 0; i < 3*n; i++) {
		int s1 , s2, s3;
		cin >> s1 >> s2 >> s3;

		T[i/3] += s1 * a;
		T[i/3] += s2 * b;
		T[i/3] += s3 * c;
	}

	int ans = 0;
	for (int i = 0; i < 999; i++) {
		ans = max(ans, T[i]);
	}

	cout << ans;
}
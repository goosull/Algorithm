#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int c1, b1, a1, c2, b2, a2;
	cin >> c1 >> b1 >> a1 >> c2>> b2>> a2;

	cout << max(c2 - c1, 0) + max(b2 - b1, 0) + max(a2 - a1, 0);
}

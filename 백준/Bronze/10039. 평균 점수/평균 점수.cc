#include <iostream>
#include <cmath>

using namespace std;;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int a, b, c, d, e;
	
	cin >> a >> b >> c >> d >> e;

	int answer = max(40, a) + max(40, b) + max(40, c) + max(40, d) + max(40, e);
	cout << answer / 5;
}

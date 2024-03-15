#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int a, b, c;
	string d, e;
	cin >> a >> d >> b >> e >> c;
	
	if (a + b == c) cout << "YES";
	else cout << "NO";
}

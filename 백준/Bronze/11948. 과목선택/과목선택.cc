#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int a[4], b[2] = {0,};

	cin >> a[0] >> a[1] >> a[2] >> a[3] >> b[0] >> b[1];
	
	sort(a, a + 4);
	cout << a[1] + a[2] + a[3] + max(b[0], b[1]);
}

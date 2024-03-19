#include <iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int money[100005];
	int answer;

	int n, m;
	int mx = 0;
	cin >> n >> m;

	for (int i = 0; i < n; i++) {
		cin >> money[i];
		mx += money[i];
	}

	int min = 1;

	while (min <= mx) {
		bool ok = true;
		int mid = (mx + min) / 2;
		int now_money = mid;
		int count = 1;

		for (int i = 0; i < n; i++) {
			int use = money[i];
			if (use > mid) {
				ok = false;
				break;
			}
			if (use > now_money){
				count++;
				now_money = mid;
			}
			now_money -= use;
		}

		if (!ok || count > m) {
			min = mid + 1;
		}
		else {
			answer = mid;
			mx = mid - 1;
		}
	}

	cout << answer <<'\n';
}

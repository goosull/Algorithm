#include <algorithm>
#include <iostream>

using namespace std;

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);

    int n;

    cin >> n;

    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;

        int ans = 0;

        while (s != "6174") {
            string sort1 = s;
            string sort2 = s;
            sort(sort1.begin(), sort1.end());
            sort(sort2.rbegin(), sort2.rend());
            s = to_string(stoi(sort2) - stoi(sort1));
            while (s.size() < 4) {
                s.insert(0, 1, '0');
            }
            ans++;
        }

        cout << ans << '\n';
    }
}
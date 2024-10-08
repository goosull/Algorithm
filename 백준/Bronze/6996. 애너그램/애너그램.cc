#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);

    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        string a, b;
        cin >> a >> b;

        // 두 문자열을 정렬
        string tempa = a, tempb = b;
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());

        if (a == b) {
            cout << tempa << " & " << tempb << " are anagrams." << endl;
        } else {
            cout << tempa << " & " << tempb << " are NOT anagrams." << endl;
        }
    }

    return 0;
}

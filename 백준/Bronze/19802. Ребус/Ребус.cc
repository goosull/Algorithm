#include <iostream>
using namespace std;

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);

    string s, ans;

    while (cin >> s) {
        int front = 0, end = 0, mid = 0;

        for (int i = 0; i < s.length(); i++) {
            if (s[i] == '\'' && mid == 0) {
                front++;
            } else if (s[i] == '\'' && mid != 0) {
                end++;
            } else {
                mid++;
            }
        }

        ans += s.substr(front * 2, s.length() - 2 * front - 2 * end);
    }
    cout << ans;
}
#include <iostream>
using namespace std;

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);

    string m;
    int n;

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> m;

        if (m[m.length() - 1] == 'a') {
            m.pop_back();
            m += "as";
        } else if (m[m.length() - 1] == 'i' || m[m.length() - 1] == 'y') {
            m.pop_back();
            m += "ios";
        } else if (m[m.length() - 1] == 'l') {
            m.pop_back();
            m += "les";
        } else if (m[m.length() - 1] == 'n') {
            m.pop_back();
            m += "anes";
        } else if (m[m.length() - 2] == 'n' && m[m.length() - 1] == 'e') {
            m.pop_back();
            m.pop_back();
            m += "anes";
        } else if (m[m.length() - 1] == 'o') {
            m.pop_back();
            m += "os";
        } else if (m[m.length() - 1] == 'r') {
            m.pop_back();
            m += "res";
        } else if (m[m.length() - 1] == 't') {
            m.pop_back();
            m += "tas";
        } else if (m[m.length() - 1] == 'u') {
            m.pop_back();
            m += "us";
        } else if (m[m.length() - 1] == 'v') {
            m.pop_back();
            m += "ves";
        } else if (m[m.length() - 1] == 'w') {
            m.pop_back();
            m += "was";
        } else {
            m += "us";
        }

        cout << m << '\n';
    }
}
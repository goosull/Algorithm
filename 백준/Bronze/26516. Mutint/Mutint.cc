#include <iostream>
using namespace std;

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);

    string m;

    while (cin >> m) {
        if (m == "0") return 0;

        int max = 0;

        for (int i = 0; i < m.size(); i++) {
            if (m[i] > m[max]) {
                max = i;
            }
        }

        if ((int)m[max] % 2 == 0) {
            if (((int)m[max] + 4) > 57) {
                m[max] = ((int)m[max] - 6);
            } else {
                m[max] = ((int)m[max] + 4);
            }
        } else {
            m[max] = '0';
        }

        m.erase(0, m.find_first_not_of('0'));

        if (m.empty()) m = "0";

        cout << m << '\n';
    }
}
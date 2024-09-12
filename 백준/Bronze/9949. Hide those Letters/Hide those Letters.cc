#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int count = 1;

int main() {
    while (true) {
        char a, b;
        cin >> a >> b;

        if (a == '#' && b == '#') return 0;

        cout << "Case " << count << '\n';
        count ++;
        int line;
        cin >> line;
        cin.ignore();

        for (int i = 0; i < line; i++) {
            string sen;
            getline(cin, sen);  

            int pos_a = sen.find(a);
            while (pos_a != string::npos) {
                sen.replace(pos_a, 1, 1, '_');
                pos_a = sen.find(a, pos_a);
            }

            int pos_A = sen.find(toupper(a), 0);
            while (pos_A != string::npos) {
                sen.replace(pos_A, 1, 1, '_');
                pos_A = sen.find(toupper(a), pos_A + 1);
            }

            int pos_b = sen.find(b);
            while (pos_b != string::npos) {
                sen.replace(pos_b, 1, 1, '_');
                pos_b = sen.find(b, pos_b);
            }

             int pos_B = sen.find(toupper(b), 0);
            while (pos_B != string::npos) {
                sen.replace(pos_B, 1, 1, '_');
                pos_B = sen.find(toupper(b), pos_B + 1);
            }

            cout << sen << '\n'; 
        }
        cout << '\n';
    }
}

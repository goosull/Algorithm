#include <algorithm>
#include <iostream>
#include <vector>
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
        vector<char> aa, bb;

        for (int j = 0; j < a.length(); j++) {
            aa.push_back(a[j]);
        }
        for (int j = 0; j < b.length(); j++) {
            bb.push_back(b[j]);
        }

        for (int j = 0; j < aa.size(); j++) {
            if (find(bb.begin(), bb.end(), aa[j]) != bb.end()) {
                bb.erase(find(bb.begin(), bb.end(), aa[j]));
                aa.erase(aa.begin() + j);
                j--;
            }
        }

        if (aa.empty() && bb.empty()) {
            cout << a << " & " << b << " are anagrams." << endl;
        } else {
            cout << a << " & " << b << " are NOT anagrams." << endl;
        }
    }
}
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {
        int can, box;
        cin >> can >> box;

        vector<int> s;
        for (int j = 0; j < box; j++) {
            int w, l;
            cin >> w >> l;
            s.push_back(w * l); // 상자의 크기 계산
        }

        // 상자의 크기를 내림차순으로 정렬
        sort(s.begin(), s.end(), greater<int>());

        int temp = 0;  // 현재 포장된 사탕 개수
        int ans = 0;   // 사용된 상자 개수

        // 사탕을 모두 포장할 때까지 상자를 사용
        for (int j = 0; j < box && temp < can; j++) {
            temp += s[j];
            ans++;
        }

        cout << ans << '\n';
    }

    return 0;
}

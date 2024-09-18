#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int N;

int main() {
    cin >> N;

    if (N == 0) {
        cout << "divide by zero";
        return 0;
    }

    int temp;

    for (int i = 0; i < N; i++) {
        cin >> temp;
    }
    cout << "1.00";
    return 0;
}
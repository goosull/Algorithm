#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);

    long long n;
    cin >> n;

    vector<long long> c(n);
    for (long long i = 0; i < n; i++) {
        cin >> c[i];
    }

    long long k;
    cin >> k;

    int size = n / k;

    for (long long i = 0; i < n; i += size) {
        sort(c.begin() + i, c.begin() + i + size);
    }

    for (long long i = 0; i < n; i++) {
        cout << c[i] << ' ';
    }
}
#include <iostream>

using namespace std;

long long gcd(int a, int b) {
    if (a == 0) {
        return b;
    }
    return gcd(b % a, a);
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);

    long long a, b;

    cin >> a >> b;

    long long ans = a * b;

    if (a > b) {
        cout << ans / gcd(b, a);
    } else {
        cout << ans / gcd(a, b);
    }
}
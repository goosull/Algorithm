#include <iostream>
#include <numeric>

using namespace std;

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);

    long long a, b;

    cin >> a >> b;

    cout << lcm(a, b);
}
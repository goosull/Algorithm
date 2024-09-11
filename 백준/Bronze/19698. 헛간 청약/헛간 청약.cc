#include <iostream>
#include <math.h>   
using namespace std;

int main() {
    int a, b, c, d;
    cin >> a >> b >> c>>d;

    int answer = ((c/d) * (b/d));

    answer = min(answer, a);

    cout << answer;
}
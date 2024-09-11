#include <iostream>
#include <math.h>   
using namespace std;

int main() {
    int a;
    string b;

    cin >> a >> b;

    if (b == "miss"){
        cout << 0;
    }
    else if (b == "bad"){
        cout << a * 200;
    }
    else if (b == "cool"){
        cout << a * 400;
    }
    else if (b == "great"){
        cout << a * 600;
    }
    else if (b == "perfect"){
        cout << a * 1000;
    }
}
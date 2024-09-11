#include <iostream>
#include <math.h>   
using namespace std;

long long ar[100000];

int main() {
    long long a, answer;
    
    cin >> a;

    answer = 0;

    for (int i =0; i<a; i++){
        cin >> ar[i]; 
    }

    for( int i =0; i<a; i++){
        for(int j = 0; j < a; j++){
            answer += max(ar[i]- ar[j], ar[j]-ar[i]);
        }
    }

    cout << answer;
}
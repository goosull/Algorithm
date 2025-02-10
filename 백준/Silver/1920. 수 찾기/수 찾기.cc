#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int n;
    cin>> n;
    vector<long long>v(n);
    
    for (int i = 0; i < n; i ++){
        cin >> v[i];
    }
    
    sort(v.begin(), v.end());
    
    int m;
    cin >> m;
    for (int i =0 ; i < m; i++){
        long long temp;
        cin >> temp;
        
        int l = 0, r = n-1;
        bool found = false;
        while (l <= r){
            int mid = (l + r) /2;
        
            if (v[mid] == temp){
                found = true;
                break;
            }
            else if (v[mid] < temp){
                l = mid + 1;
            }
            else{
                r = mid - 1;
            }
        }
        cout  << (found ? 1 : 0) << '\n';
    }  
    return 0; 
}
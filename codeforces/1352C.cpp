#include<iostream>

using namespace std;

int main(){
    int n, k, t;
    cin >> t; 
    while(t--) {
        cin >> n >> k;
        int d = n - 1; 
        int r = k % d;
        k = k / d;
        if (r == 0) cout << k*n - 1 << '\n';
        else cout << k*n + r << '\n';
    }
}
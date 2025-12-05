#include<bits/stdc++.h>

using namespace std;

int main(){
    int t, a, b, c;
    cin >> t;
    while(t--){
        cin >> a >> b >> c;
        if (abs(b - c) + c - 1 > a - 1) cout << 1 << '\n';
        else if (abs(b - c) + c  == a ) cout << 3 << '\n';
        else cout << 2 << '\n';
    }
}
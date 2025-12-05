#include<bits/stdc++.h>

using namespace std;

const long long mod = 1000000000+7;

long long cal(int n){
    long long t = 1;
    for (int i = 1; i <= n ; ++i) {
        t = (t * 2) % mod;
    }
    return t;
}

int main(){
    int n, k;
    cin >> n >> k;
    if (k >= n) cout << cal(n) ;
    else {
        long long res = 0;
        for (int i = 1; i <= k; ++i) res = (res + cal(n - i)) % mod;
        res = (res+1) % mod;
        cout << res;
    }
}
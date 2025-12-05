#include<bits/stdc++.h>

using namespace std;

const int mod = 998244353;

long long cal(int y, int x){
    long long r = 1;
    for(int i = 1; i <= y; ++i) 
        r = r * x % mod;
    return r;
}

int main(){
    int n, m;
    cin >> n >> m;
    int d[300000+7];
    bool check[300000+7];
    d[1] = 0;
    for (int i = 1; i <= n; ++i) {
        cin >> d[i+1];
        d[i+1] += d[i];
    }
    if (n == 1) {cout << m; return 0;}
    if (n == 2) {
        long long res = (m*m)%mod;
        cout << res;
        return 0;
    }
    long long res = cal(n, m);
    if (d[n+1] % 2 != 0) {cout << res; return 0;}
    int i = 1, j = 2;
    int cntPair = 0, cntAlone = 0;
    while(j < n) {
        if (d[j] - d[i] != d[n+1] / 2) j++;
        else {
            check[i] = true;
            check[j] = true;
            i++;
            ++cntPair;
            j++;
        }
    }
    for (int i = 1; i <= n; ++i) if (!check[i]) ++cntAlone;
    for (int i = 0; i <= min(m, cntPair); ++i) {
        res = res + 
    }
    cout << res;
}
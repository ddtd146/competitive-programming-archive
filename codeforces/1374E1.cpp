#include<bits/stdc++.h>
#define N 200007
 
using namespace std;


int main(){
    int n, k;
    cin >> n >> k;
    int a, b, t;
    int res = 2*1e9+1;
    int u[N]={0}, v[N]={0}, w[N]={0};
    int ux = 0, vx = 0, wx = 0;
    for(int i = 1; i <= n; ++i) {
        cin >> t >> a >> b;
        if (a + b == 2) {++ux; u[ux] = t;}
        if (a == 1 && b == 0) {++vx; v[vx] = t;}
        if (a == 0 && b == 1) {++wx; w[wx] = t;}
    }
    sort(u+1, u+ux+1);
    sort(v+1, v+vx+1);
    sort(w+1, w+wx+1);
    u[0] = v[0] = w[0] = 0;
    for (int i = 1; i <= ux; ++i) 
        u[i] += u[i-1];
    for (int i = 1; i <= vx; ++i) 
        v[i] += v[i-1];
    for (int i = 1; i <= wx; ++i) 
        w[i] += w[i-1];
    
    for (int i = 0; i <= min(ux, k); ++i){
        if(k-i <= vx && k-i <= wx) 
            res = min(res, u[i] + v[k-i] + w[k-i]);
    }
    if (res == 2*1e9+1) {
        cout << -1; 
        return 0;
    }
    cout << res;
}
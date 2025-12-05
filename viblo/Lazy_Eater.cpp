#include<bits/stdc++.h>

using namespace std;

int main(){
    int n, m , k;
    cin >> n >> m >> k;
    int a[1000+7];
    int d[1000+7] = {0};
    int cnt = 0;
    for (int i = 1; i <= n; ++i) cin >> a[i];
    for (int i = 1; i < n; ++i) 
        if (a[i+1] == 1) d[i]++;
    d[n] = 0;
    for (int i = n-1; i>=1; --i)
        d[i] = d[i+1]+d[i];
    for (int i = 1; i <= n; ++i){
        if (a[i] == 1) m--;
        if (m < 0) {m++; cnt++;}
        if (a[i] == 2){
            if (m > d[i]) {
                m--;
            }else {
                k--;
                if (k < 0) {k++; cnt++;}
            }
        }
    }
    cout << cnt;
}

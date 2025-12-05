#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    int a[200000+7], d[200000+7] = {0};
    int cnt = 0;
    for(int i = 0; i < n; ++i) cin >> a[i];
    for(int i = n-1; i >= 0; --i){
        if (a[i] == 0) ++cnt;
        if (a[i] == 1) d[i] += cnt;
    }
    long long res = 0;
    for(int i = 0; i < n; ++i) {
        if (a[i] == 1) res += d[i];
    }
    cout << res;
}
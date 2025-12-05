#include<bits/stdc++.h>

using namespace std;

int main(){
    int t, n, k, a[2*100000+7], res;
    cin >> t;
    while(t--){
        cin >> n >> k;
        vector<int> cnt(2*k+7);
        vector<int> prefs(2*k+7);
        res = INT_MAX;
        for (int i = 1; i <= n; ++i) cin >> a[i];
        for (int i = 1; i <= n/2; ++i) 
            ++cnt[a[i] + a[n-i+1]];   
        for (int i = 1; i <= n/2; ++i) {
            ++prefs[min(a[i], a[n-i+1])+1];
            --prefs[max(a[i], a[n-i+1])+k+1];
        }
        for (int i = 2; i <= 2*k; ++i) 
            prefs[i] += prefs[i-1];      
        for (int i = 2; i <= 2*k; ++i) 
            res = min(res, (n/2 - prefs[i])*2 + prefs[i] - cnt[i]);
        cout << res << '\n';
    }
}
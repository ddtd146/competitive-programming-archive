#include<bits/stdc++.h>

typedef long long ll;

using namespace std;

int main(){
    int n, k, t;
    int a[100000+7];
    cin >> t;
    while(t--){
        cin >> n >> k;
        for (int i = 1; i <= n; ++i) cin >> a[i];
        ll res = -1e10-7;
        int l = max(1, n - 2*k);
        for (int i = l; i <= n-1; ++i)
            for(int j = i+1; j <= n; ++j)
                res = max(res, 1LL * i*j - 1LL * k*(a[i] | a[j]));
        cout << res << '\n'; 
    }
    return 0;
}
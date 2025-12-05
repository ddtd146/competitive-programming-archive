#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    long long a[100000+7];
    while(t--){
        long long n, k, b;
        long long s; 
        cin >> n >> k >> b >> s;
        if (s < k*b || s > k*b + n*(k-1)) {
            cout << -1 << '\n'; 
            continue;
        }
        s -= k*b;
        for (int i = 1; i <= n; ++i){
            if (s >= k - 1) a[i] = k - 1;
            else a[i] = s;
            s -= a[i];
        }
        a[1] += k*b;
        for(int i = 1; i <= n; ++i) cout << a[i] << " ";
        cout << '\n';
    }
}
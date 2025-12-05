#include<bits/stdc++.h>

using namespace std;

int main(){
    long long n, m;
    cin >> n >> m;
    long long res = 0;
    long long a[100000+7] = {0};
    for(int i = 1; i <= n ; ++i) cin >> a[i];
    for (int i = 1; i < n; ++i) 
        if (a[i] != a[i+1]) res += (n - i)*i; 

    while(m--){
        int pos, x;
        cin >> pos >> x;
        if (a[pos] != a[pos+1]) res -= (n - pos) * pos;
        if (a[pos] != a[pos-1]) res -= (n - pos + 1) * (pos - 1);
        a[pos] = x;
        if (a[pos] != a[pos+1]) res += (n - pos) * pos;
        if (a[pos] != a[pos-1]) res += (n - pos + 1) * (pos - 1);
        cout << res + n*(n+1)/2 << '\n';
    }
}
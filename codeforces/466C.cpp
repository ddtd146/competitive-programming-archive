#include<bits/stdc++.h>

#define N 500000+7

using namespace std;

int main(){
    int n;
    cin >> n;
    int a[N];
    a[0] = 0;
    for(int i = 1; i <= n; ++i) {
        int x;
        cin >> x;
        a[i] = a[i-1]+x;
    }
    long long d = 0, res = 0;
    for (int i = 1; i <= n - 2; ++i){
        if (a[i] * 3 == a[n]) ++d;
        if (a[i+1] * 3 == 2 * a[n]) res += d;
    }
    cout << res;
}
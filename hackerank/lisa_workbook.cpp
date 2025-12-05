#include<iostream>

using namespace std;

int main(){
    int n, k;
    int page = 0;
    int x, t, res = 0;
    cin >> n >> k; 
    for (int i = 1; i <= n; i++) {
        cin >> x;
        t = 0;
        while(x > k) {
            x = x - k;
            page ++;
            t++;
            if (page <= t*k && page >= k*(t - 1) + 1 ) res++;
        }
        if (x > 0) {
            t++;
            page ++;
            if (page >= k*(t-1) + 1 && page <= k*(t-1) + x) res ++;
        }
    }
    cout << res ;
}
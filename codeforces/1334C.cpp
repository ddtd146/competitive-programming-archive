#include<iostream>
#include<climits>

typedef long long ll;

using namespace std;

int main(){
    int t;
    int n;
    ll a[300000+7], b[300000+7];
    cin >> t;
    while(t--){
        cin >> n;
        for (int i = 0; i < n; ++i) cin >> a[i] >> b[i];
        ll m = LLONG_MAX;
        ll bullets = 0;
        for (int i = 0; i < n; ++i){
            if (a[i] > b[(i-1+n)%n]) {
                bullets += a[i] - b[(i-1+n)%n];
                m = min(m, b[(i-1+n)%n]);
            }
            else {
                m = min(m, a[i]);
            }
        }
        cout << bullets + m << '\n';
    }
    return 0;
}
#include <algorithm>
#include <array>
#include <bitset> 
#include <climits>
#include <cstdint>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <iostream>
#include <list>
#include <map>
#include <queue>
#include <random>
#include <set>
#include <stack>
#include <string>
#include <utility>
#include <unordered_set>
#include <unordered_map>
#include <vector>

#define ll long long
#define uint unsigned int
#define pii pair <int , int>
#define pis pair <int, string>

#define pb push_back
#define mp make_pair
#define all(x) x.begin(), x.end()
#define fi first
#define se second

#define forn(i, n) for (int i = 0; i < n; ++i)
#define foru(i, a, b) for (int i = a; i <= b; ++i) 
#define ford(i, a, b) for (int i = a; i >= b; --i)
#define w(t) while(t--)

const int N = 14062003;

using namespace std;

ll spf(ll x){
    for(int i = 2; i * i <= x; ++i){
        if (x % i == 0) return i;
    }
    return x;
}
// alternatively, choose p = k + 1;
void solve(){
    ll n, k, p; 
    cin >> n >> k;
    vector<ll> a(n);
    forn(i, n) cin >> a[i];
    if (k == 2) {
        forn(i, n) {
            if (a[i] % 3 == 1) cout << a[i] + 2 << " ";
            else if (a[i] % 3 == 2) cout << a[i] + 4 << " ";
            else cout << a[i] << " ";
        }
        cout << "\n";
        return;
    }
    if (k == 1) p = 2;
    else p = spf(k - 1);
    forn (i, n) 
        cout << a[i] + ((p - a[i] % p) % p * k) << " ";
    cout << "\n";
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t = 1;
    cin >> t;
    w(t) {
        solve();
    }
    return 0;
}
#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>
#include <map>
#include <set>
#include <queue>
#include <stack>
#include <string>
#include <climits>
#include <cmath>
#include <bitset>
#include <random>

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

const ll N = 1000000000000LL; // 10^12

using namespace std;

void solve() {
    ll x, y, k;
    cin >> x >> y >> k;
    
    if (y == 1) {
        cout << -1 << '\n';
        return;
    }

    ll n = N;
    ll xx = x; 
    
    while (xx > 0) {
        ll q = n / y; 
        if (q == 0) break; 
        ll gap = n % y;
        if (gap == 0) {
            gap = y;
        }
        ll s = (gap + q - 1) / q;
        ll steps = min(xx, s);
        
        n -= steps * q;
        xx -= steps;
        
        if (n < k) {
            cout << -1 << "\n";
            return;
        }
    }
    
    if (k > n) {
        cout << -1 << '\n';
        return;
    }

    ll c = y - 1;
    while (x > 0) { 
        ll q = (k - 1) / c;
        if (q == 0) break; 
        ll m = k - 1;
        ll gap = (q + 1) * c - m; 
        ll s = (gap + q - 1) / q;
        ll steps = min(x, s);

        k += steps * q;
        x -= steps;
    }

    cout << k << '\n';
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t;
    cin >> t;
    w(t) {
        solve();
    }
    return 0;
}
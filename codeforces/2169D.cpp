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

const ll N = 1e12;

using namespace std;

void solve() {
    ll x, y, k;
    cin >> x >> y >> k;
    
    if (y == 1) {
        cout << -1 << '\n';
        return;
    }

    ll n = N;
    forn(i, x){
        n = n - n/y;
        if (n < k) {
            cout << -1 << "\n";
            return;
        }
    }
    if (k > n){
        cout << -1 << '\n';
        return;
    }
    forn(i, x) {
        ll z = (k - 1) / (y - 1);
        
        if (z == 0) break; 
        k = k + z;
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
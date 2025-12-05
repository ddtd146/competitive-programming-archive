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

void solve(){
    ll n, l, r;
    cin >> n >> l >> r;
    vector<ll> a(n);
    forn(i, n) cin >> a[i];

    ll ans = 0;

    // Slope >= 0 (Min at p = l)
    {
        ll cur = 0, k = 0;
        vector<ll> costs;
        forn(i, n) {
            ll diff = l - a[i];
            cur += abs(diff);
            if (diff >= 0) k++;
            else {
                k--;
                costs.pb(abs(diff));
                costs.pb(abs(diff));
            }
        }
        sort(all(costs));
        for(auto c : costs) {
            if(k >= 0) break;
            cur -= c;
            k++;
        }
        if(k >= 0) ans = max(ans, cur);
    }

    // Slope <= 0 (Min at p = r)
    {
        ll cur = 0, k = 0;
        vector<ll> costs;
        forn(i, n) {
            ll diff = r - a[i];
            cur += abs(diff);
            if (diff <= 0) k--;
            else {
                k++;
                costs.pb(abs(diff));
                costs.pb(abs(diff));
            }
        }
        sort(all(costs));
        for(auto c : costs) {
            if(k <= 0) break;
            cur -= c;
            k--;
        }
        if(k <= 0) ans = max(ans, cur);
    }

    cout << ans << "\n";
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
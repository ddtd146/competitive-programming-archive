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

using namespace std;

void solve(){
    int n;
    ll y;
    cin >> n >> y;
    vector<int> a(n);
    int maxA = 0;
    forn(i, n) {
        cin >> a[i];
        maxA = max(maxA, a[i]);
    }

    vector<int> cnt(maxA + 1, 0);
    for(int v : a) cnt[v]++;

    vector<int> pr(maxA + 1, 0);
    foru(i, 1, maxA) {
        pr[i] = pr[i - 1] + cnt[i];
    }

    if (maxA == 1) {
        cout << n << "\n";
        return;
    }

    ll res = -1e18; 

    foru(x, 2, maxA) {
        ll total = 0; 
        
        foru(p, 1, maxA) {
            ll l = (ll)x * (p - 1);
            ll r = min((ll)maxA, (ll)x * p);
            
            if (l > maxA) break;

            int need = pr[r] - pr[(int)l];
            
            total += (ll)need * p; 
            total -= y * max(0, need - cnt[p]);
        }
        res = max(res, total);
    }
    
    cout << res << "\n";
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
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

#define N 200000+7

using namespace std;

struct cmp {
    bool operator() (pii x, pii y){
        if (x.fi - x.se == y.fi - y.se) return x.se < y.se;
        return x.fi - x.se > y.fi - y.se;
    }
};

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int n;
    pii b[N]; 
    cin >> n;    
    foru(i, 1, n) {
        cin >> b[i].fi;
        b[i].se = i;
    };
    sort(b+1, b+1+n, cmp());
    // foru(i, 1, n) cout << b[i].fi << " ";
    // cout << '\n';
    // foru(i, 1, n) cout << b[i].se << " ";
    ll s = b[1].fi;
    ll res = 0;
    foru(i, 2, n) {
        if (b[i].fi - b[i].se < b[i-1].fi - b[i-1].se) {
            res = max(res, s);
            s = 0;
        }
        s += b[i].fi;
    }

    res = max(res, s);
    cout << res;
    return 0;
}
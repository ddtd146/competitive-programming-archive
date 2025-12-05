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

// min cost for type type
ll minCost(int type, vector<ll> &dp, const vector<int> &c, const vector<vector<int>> &e){
    if (dp[type] != -1) return dp[type];
    if (e[type].empty()) return dp[type] = c[type];
    ll mixingCost = 0;
    for (auto ingredient : e[type]) {
        mixingCost += minCost(ingredient, dp, c, e);
    }
    return dp[type] = min(1LL * c[type], mixingCost);
}

void solve(){
    int n, k;
    cin >> n >> k;
    vector<int> c(n+1), p(n+1);
    vector<ll> dp(n+1, -1);
    forn(i, n) cin >> c[i+1];
    forn(i, k) {
        cin >> p[i+1];
        dp[p[i+1]] = 0;
    }

    vector<vector<int>> e(n+1);
    forn(i, n) {
        int m;
        cin >> m;
        
        forn(j, m) {
            int x;
            cin >> x;
            e[i+1].pb(x);
        };
    }
    forn(i, n)
        cout << minCost(i+1, dp, c, e) << " ";
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
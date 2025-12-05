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
const ll MOD = 1e9 + 7;

using namespace std;

void solve(){
    int n, k;
    cin >> n >> k;
    // dp[i][j]: number of good sequences of length j ending with i
    vector<vector<ll>> dp(n + 1, vector<ll>(k + 1, 0));

    foru(i, 1, n) dp[i][1] = 1;

    foru(j, 2, k) { 
        foru(d, 1, n) { 
            for (int m = d; m <= n; m += d) {
                dp[m][j] = (dp[m][j] + dp[d][j-1]) % MOD;
            }
        }
    }
    ll res = 0;
    foru(i, 1, n) res = (res + dp[i][k]) % MOD;
    cout << res << '\n';
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t = 1;
    w(t) {
        solve();
    }
    return 0;
}
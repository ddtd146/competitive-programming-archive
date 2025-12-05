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
const ll MOD = 998244353;

using namespace std;

void solve(){
    int n;
    cin >> n;
    vector<int> a(n+1);
    forn(i, n) cin >> a[i+1];
    vector<vector<ll>> dp(n+1, vector<ll>(3, 0));
    foru(i, 1, n){
        dp[i][1] = (dp[i-1][1] + (a[i] == 1)) % MOD;
        dp[i][2] = (dp[i-1][2] + (a[i] == 2 ? dp[i-1][1] + dp[i-1][2]: 0)) % MOD;
        dp[i][0] = (dp[i-1][0] + (a[i] == 3 ? dp[i-1][2] : 0)) % MOD;
    }
    cout << dp[n][0] << "\n";
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
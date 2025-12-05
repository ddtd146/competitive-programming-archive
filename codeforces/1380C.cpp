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
    int n, k;
    cin >> n >> k;
    vector<int> a(n+1, 0);
    forn(i, n) cin >> a[i+1];
    sort(all(a), greater<int>());
    
    vector<int> dp(n+1, 0);
    int res = 0;
    forn(ii, n){
        int i = ii + 1;
        if (a[ii] >= k) 
            dp[i] = dp[i-1] + 1;
        else {
            int len = k / a[ii];
            if (k % a[ii] != 0) len ++;
            if (i - len >= 0) dp[i] = dp[i-len] + 1;
        }
        res = max(res, dp[i]);
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
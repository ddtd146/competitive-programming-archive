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

const int N = 5005;
const int INF = 0x3f3f3f3f;

using namespace std;

// Global GCD table to avoid recomputing
int g[N][N];

void precompute() {
    forn(i, N) g[i][0] = g[0][i] = g[i][i] = i;
    foru(i, 1, N - 1) {
        foru(j, 1, i - 1) {
            g[i][j] = g[j][i] = g[j][i % j];
        }
    }
}

void solve(){
    int n;
    cin >> n;
    vector<int> a(n);
    int k = 0;
    
    // Read input and calculate total GCD of the array
    forn(i, n) {
        cin >> a[i];
        k = g[k][a[i]];
    }

    // Normalize array by dividing by total GCD 'k'
    int m = 0;
    // Use vector for DP, initialized to INF
    vector<int> dp(N, INF); 

    forn(i, n) {
        a[i] /= k;
        m = max(m, a[i]);
        dp[a[i]] = 0; // Cost is 0 if we already have the number
    }

    // DP: Try to reach smaller GCDs
    ford(x, m, 1) {
        if (dp[x] == INF) continue; // Optimization: skip if this state is unreachable
        
        for(int val : a) {
            int next_val = g[x][val];
            if (dp[next_val] > dp[x] + 1) {
                dp[next_val] = dp[x] + 1;
            }
        }
    }

    // Calculate answer
    // Cost to form the first '1'
    int ans = max(dp[1] - 1, 0);
    
    // Cost to fix the remaining numbers
    for(int val : a) {
        if (val > 1) ans++;
    }

    cout << ans << "\n";
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    precompute(); // Build GCD table once
    
    int t = 1;
    cin >> t;
    w(t) {
        solve();
    }
    return 0;
}
#include <algorithm>
#include <climits>
#include <iostream>
#include <vector>

#define ll long long
#define forn(i, n) for (int i = 0; i < n; ++i)
#define foru(i, a, b) for (int i = a; i <= b; ++i) 
#define w(t) while(t--)

using namespace std;

const ll INF = 1e18; 

void solve(){
    int n;
    cin >> n;

    // dp[i][j] stores the min weight for polygon vertex i to j
    vector<vector<ll>> dp(n + 1, vector<ll>(n + 1, 0));

    foru(len, 3, n) {
        for (int i = 1; i <= n - len + 1; ++i) {
            int j = i + len - 1; 
            
            dp[i][j] = INF;
            
            for (int k = i + 1; k < j; ++k) 
                dp[i][j] = min(dp[i][k] + dp[k][j] + (ll)i * k * j, dp[i][j]);
        } 
    }

    cout << dp[1][n] << "\n";
}
// all triangle start with vertex 1
// void solve(){
//     int n; cin >> n;

// 	long long ans = 0;
// 	for(int id = 2; id < n; id++)
// 		ans += 1ll * id * (id + 1);
	
// 	cout << ans << endl;
// }

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    solve();
    
    return 0;
}
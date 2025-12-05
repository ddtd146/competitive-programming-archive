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
    int n;
    cin >> n;
    vector<int> a(n);
    vector<vector<int>> dp(n, vector<int>(2, 0));
    forn(i, n) cin >> a[i];
    if (n <= 2) {
        cout << a[0] << "\n";
        return;
    }
    dp[0][0] = INT_MAX-2;
    dp[0][1] = a[0];
    dp[1][0] = a[0];
    dp[1][1] = a[0] + a[1];
    forn(ii, n-2){
        int i = ii + 2;
        dp[i][0] = min(dp[i-1][1], dp[i-2][1]);
        dp[i][1] = min(dp[i-1][0] + a[i], dp[i-2][0] + a[i-1] + a[i]);
        
    } 
    cout << min(dp[n-1][0], dp[n-1][1]) << "\n";
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
/* Cach 2: 
voi k hard bosses thi chi can skip [k/3]
voi easy bosses thi khong quan trong la ai kill nen luon co the gia dinh minh la nguoi bat dau chuoi hard bosses
*/
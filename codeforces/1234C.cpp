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
    vector<vector<int>> a(3, vector<int>(n+1));
    forn(i, 2){
        string s;
        cin >> s;
        forn(j, n) a[i+1][j+1] = s[j] - '0';
    }
    // dp[i][j] , consider column i, output in row j 
    vector<vector<bool>> dp(n+1, vector<bool>(3, false)); 
    dp[1][1] = a[1][1] < 3; 
    dp[1][2] = a[2][1] > 2 & a[1][1] > 2;
    foru(i, 2, n){
        dp[i][1] = a[1][i] < 3 & dp[i-1][1] | a[1][i] > 2 & a[2][i] > 2 & dp[i-1][2];
        dp[i][2] = a[2][i] < 3 & dp[i-1][2] | a[1][i] > 2 & a[2][i] > 2 & dp[i-1][1];
    }
    cout << (dp[n][2] ? "YES\n" : "NO\n" );
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
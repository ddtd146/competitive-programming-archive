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

const int N = 2e5+1;

using namespace std;

vector<int> dp(N+1, 0);

void preCalc(){
    int power = 1;
    int exp = 0; 
    foru(i, 1, N){
        if (3 * power <= i) {
            power *= 3;
            exp++;
        }
        dp[i] = dp[i-1] + exp + 1;
        int dpWatch = dp[i];
    }
}

void solve(){
    int l, r;
    cin >> l >> r;
    cout << dp[r] - 2*dp[l-1] + dp[l] << "\n"; 
    // foru(i, 1, 10) cout << dp[i] << " ";
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t = 1;
    cin >> t;
    preCalc();
    w(t) {
        solve();
    }
    return 0;
}
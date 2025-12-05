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

const int N = 1e6 + 1;

using namespace std;

void preCalc(vector<ll> &dp){
    dp[1] = 1;
    dp[2] = 5;
    dp[3] = 10;
    int i = 2;
    foru(x, 4, N){
        if (x > i*(i+1)/2) i ++;
        int j = x - i*(i-1)/2;
        int top_left = (j-1) + (i-1)*(i-2)/2;
        int top_right = j + (i-1)*(i-2)/2;
        int top_top_mid = (j-1) + (i-2)*(i-3)/2;
        dp[x] = 1LL * x * x + (j > 1 ? dp[top_left] : 0) 
                            + (j < i ? dp[top_right] : 0) 
                            - (j > 1 && j < i ? dp[top_top_mid] : 0);
    }
}

void solve(const vector<ll> &dp){
    int n;
    cin >> n;
    cout << dp[n] << "\n";
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    vector<ll> dp(N, 0);
    preCalc(dp);
    int t = 1;
    cin >> t;
    w(t) {
        solve(dp);
    }
    return 0;
}
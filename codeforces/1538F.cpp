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

void preCalc(vector<int> &dp){
    dp[0] = 1;
    foru(i, 1, 9) {
        forn(j, i) 
            dp[i] += 9 * dp[j];
        dp[i] += i + 1;
    }
}
int countChangedDigit(int x, const vector<int> &dp){
    int y = 1;
    foru(i, 1, 9) y *= 10;
    int i = 9;
    int cnt = 0;
    while(x > 0){
        if (x < y) {
            y /= 10;
            i--;
            continue;
        }
        cnt += (x / y) * dp[i];
        x = x % y;
        y /= 10;
        i--;
    }
    return cnt;
}

void solve(const vector<int> &dp){
    int l, r;
    cin >> l >> r;
    cout << countChangedDigit(r, dp) - countChangedDigit(l, dp) << "\n"; 
    
    // int res = 0;
    // while (l != 0 || r != 0) {
    //     res += r - l;
    //     l /= 10;
    //     r /= 10;
    // }
    // cout << res << '\n';
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t = 1;
    cin >> t;
    vector<int> dp(10, 0);
    preCalc(dp);
    w(t) {
        solve(dp);
    }
    return 0;
}
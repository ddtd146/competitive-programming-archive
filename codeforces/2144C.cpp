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
const int MOD = 998244353;

using namespace std;

void solve(){
    int n;
    cin >> n;
    vector<int> a(n+1), b(n+1);
    foru(i, 1, n) cin >> a[i];
    foru(i, 1, n) cin >> b[i];
    ll res = 1;
    foru(i, 1, n) {
        if (a[i] > b[i]) swap(a[i], b[i]); // auto swap 
        if (i == 0 || a[i] >= b[i-1]) res = (res * 2) % MOD; 
        // If swapping the previous pair does not affect the current pair's swap then start a new sequence
    }
    cout << res << '\n';
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
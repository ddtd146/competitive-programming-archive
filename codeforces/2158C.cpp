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
#define vi vector<int>
#define vl vector<ll>

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
    vi a(n), b(n);
    forn(i, n) cin >> a[i];
    forn(i, n) cin >> b[i];
    k = k % 2; 
    vl L(n);
    vl R(n);
    forn(i, n) {
        if (i > 0 && L[i-1] > 0) L[i] = L[i-1] + a[i];
        else L[i] = a[i];
    }
    ford(i, n-1, 0) {
        if (i < n-1 && R[i+1] > 0) R[i] = R[i+1] + a[i];
        else R[i] = a[i];
    }
    if (k == 0) {
        cout << *max_element(all(L)) << "\n";
    } else {
        ll res = LLONG_MIN;
        forn(i, n) {
            res = max(res, L[i] + R[i] - a[i] + b[i]);
        }
        cout << res << "\n";
    }
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
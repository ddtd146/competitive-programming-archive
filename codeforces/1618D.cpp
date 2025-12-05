#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>
#include <map>
#include <set>
#include <queue>
#include <stack>
#include <string>
#include <climits>
#include <cmath>
#include <bitset>
#include <random>

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

void solve() {
    int n, k;
    cin >> n >> k;
    vector<ll> a(n);
    forn(i, n) {
        cin >> a[i];
    }
    sort(all(a));
    ll cost = 0;

    forn(i, n - 2 * k) {
        cost += a[i];
    }

    forn(i, k) {
        cost += a[i + n - 2 * k] / a[i + n - k];
    }
    
    cout << cost << '\n';
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t;
    cin >> t;
    w(t) {
        solve();
    }
    return 0;
}
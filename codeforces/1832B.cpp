#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>

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
    forn(i, n) cin >> a[i];

    sort(all(a));

    ll res = 0;
    vector<ll> pr(n + 1, 0);

    forn(i, n) {
        pr[i + 1] = pr[i] + a[i];
    }

    foru(i, 0, k) {
        if (2 * i <= n - (k - i) && n - (k - i) <= n) { 
             ll currentSum = pr[n - (k - i)] - pr[2 * i];
            res = max(res, currentSum);
        }
    }
    cout << res << '\n';
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
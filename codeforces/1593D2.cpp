#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>
#include <map>
#include <set>
#include <climits>
#include <cmath>

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

set<int> divs(int n) {
    set<int> d;
    for (int dd = 1; dd * dd <= n; dd++) {
        if (n % dd == 0) {
            d.insert(n / dd);
            d.insert(dd);
        }
    }
    return d;
}

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    forn(i, n) {
        cin >> a[i];
    }
    int k = -1;

    forn(i, n) {
        int minv = a[i];
        int same = 0;
        vector<int> d;
        forn(j, n) {
            if (a[j] == minv) {
                same++;
            } else if (a[j] > minv) {
                d.pb(a[j] - minv);
            }
        }
        if (same >= n / 2) {
            k = INT_MAX;
        }

        map<int, int> div_counts;
        for (int di : d) {
            for (int dd : divs(di)) {
                div_counts[dd]++;
            }
        }
        for (auto p : div_counts) {
            if (p.second >= n / 2 - same) {
                if (k != INT_MAX) {
                     k = max(k, p.first);
                }
            }
        }
    }

    if (k == INT_MAX) {
        cout << -1 << '\n';
    } else {
        cout << k << '\n';
    }
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
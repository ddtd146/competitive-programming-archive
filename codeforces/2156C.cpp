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

using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;

    int maxVal = 0;
    vector<int> a(n);
    forn(i, n) {
        cin >> a[i];
        maxVal = max(maxVal, a[i]);
    }

    vector<int> freq(maxVal + 1, 0);
    forn(i, n) {
        if (a[i] <= maxVal) { // Ensure we don't access out of bounds
            freq[a[i]]++;
        }
    }

    vector<int> counts(maxVal + 1, 0);

    foru(d, 1, maxVal) {
        for (int j = d; j <= maxVal; j += d) {
            counts[d] += freq[j];
        }
    }

    int res = 1;

    ford(d, maxVal, 1) {
        if (counts[d] >= n - k) {
            res = d;
            break;
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
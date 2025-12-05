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

const int MAX_N_CONST = 50 + 7;

using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> cnt(n + 1, 0);
    forn(i, n) {
        int x;
        cin >> x;
        if (x >= 1 && x <= n) {
            ++cnt[x];
        }
    }

    int res = 0;

    for (int s = 2; s <= 2 * n; ++s) {
        int cur = 0;
        for (int i = 1; i < (s + 1) / 2; ++i) {
            int j = s - i;
            if (j > n) continue;
            cur += min(cnt[i], cnt[j]);
        }
        if (s % 2 == 0) {
            int i = s / 2;
            if (i <= n) {
                cur += cnt[i] / 2;
            }
        }
        res = max(res, cur);
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
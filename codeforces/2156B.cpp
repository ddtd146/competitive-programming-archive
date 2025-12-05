#include <iostream>
#include <vector>
#include <string>
#include <numeric>
#include <algorithm>
#include <map>

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
    int n, q;
    cin >> n >> q;
    string s;
    cin >> s;

    bool all_A = true;
    forn(i, n) {
        if (s[i] == 'B') {
            all_A = false;
            break;
        }
    }

    w(q) {
        ll x;
        cin >> x;

        if (all_A) {
            cout << x << '\n';
        } else {
            ll res = 0;
            int idx = 0;

            while (x > 0) {
                if (s[idx] == 'B') {
                    x /= 2;
                } else {
                    x--;
                }
                res++;
                idx = (idx + 1) % n;
            }
            cout << res << '\n';
        }
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
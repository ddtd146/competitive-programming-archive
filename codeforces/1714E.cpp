#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>
#include <set>
#include <queue>
#include <map>
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

int next(int x) {
    return x + x % 10;
}

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    bool flag = false;
    forn(i, n) {
        cin >> a[i];
        if (a[i] % 5 == 0) {
            flag = true;
            a[i] = next(a[i]);
        }
    }

    if (flag) {
        cout << (*min_element(all(a)) == *max_element(all(a)) ? "Yes": "No") << '\n';
    } else {
        bool flag2 = false, flag12 = false;
        forn(i, n) {
            int x = a[i];
            while (x % 10 != 2) {
                x = next(x);
            }
            if (x % 20 == 2) {
                flag2 = true;
            } else {
                flag12 = true;
            }
        }
        cout << ((flag2 && flag12) ? "No" : "Yes") << '\n';
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t = 1;
    cin >> t;
    w(t) {
        solve();
    }
    return 0;
}
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
    int n;
    cin >> n;
    vector<int> p(n);
    vector<int> pos(n + 1);
    forn(i, n) {
        cin >> p[i];
        pos[p[i]] = i + 1;
    }
    string x;
    cin >> x;

    if (x[pos[1] - 1] == '1' || x[pos[n] - 1] == '1') {
        cout << -1 << '\n';
        return;
    }

    int l = n + 1;
    int r = -1;
    forn(i, n) {
        if (x[i] == '1') {
            r = i + 1;
            if (l == n + 1) {
                l = i + 1;
            }
        }
    }

    if (l > r) {
        cout << 0 << '\n';
        return;
    }
    int minPos = min(pos[1], pos[n]);
    int maxPos = max(pos[1], pos[n]);
    if (l > minPos && r < maxPos) {
        cout << 1 << '\n';
        cout << minPos << " " << maxPos << '\n';
        return;
    }
    
    cout << 2 << '\n';
    cout << 1 << " " << pos[n] << '\n';
    cout << pos[1] << " " << n << '\n';
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
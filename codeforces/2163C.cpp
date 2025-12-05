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

const int N = 14062003; // Keeping your constant, though unused

using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<vector<int>> a(2, vector<int>(n + 1));
    foru(i, 1, n) cin >> a[0][i];
    foru(i, 1, n) cin >> a[1][i];

    
    vector<int> P1(n + 1);
    vector<int> S1(n + 1);
    P1[0] = 0;
    S1[0] = INT_MAX;
    foru(i, 1, n) {
        P1[i] = max(P1[i - 1], a[0][i]);
        S1[i] = min(S1[i - 1], a[0][i]);
    }

    vector<int> P2(n + 2);
    vector<int> S2(n + 2);
    P2[n + 1] = 0;
    S2[n + 1] = INT_MAX;
    ford(i, n, 1) {
        P2[i] = max(P2[i + 1], a[1][i]);
        S2[i] = min(S2[i + 1], a[1][i]);
    }

    vector<int> L(n + 1);
    vector<int> R(n + 1);
    foru(i, 1, n) {
        L[i] = min(S1[i], S2[i]);
        R[i] = max(P1[i], P2[i]);
    }

    int maxVal = 2 * n;
    vector<int> maxL_at_R(maxVal + 1, 0);
    foru(i, 1, n) {
        maxL_at_R[R[i]] = max(maxL_at_R[R[i]], L[i]);
    }

    vector<int> L_max(maxVal + 1, 0);
    foru(r, 1, maxVal) {
        L_max[r] = max(L_max[r - 1], maxL_at_R[r]);
    }

    ll total = 0;
    foru(r, 1, maxVal) {
        total += min(r, L_max[r]);
    }

    cout << total << '\n';
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
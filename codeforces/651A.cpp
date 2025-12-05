#include <iostream>
#include <vector>
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

using namespace std;

int a[201][201];

int solve(int j1, int j2) {
    if (j1 <= 0 || j2 <= 0) {
        return 0;
    }
    if (a[j1][j2] != -1) {
        return a[j1][j2];
    }
    int res;
    if (j1 == 1 && j2 == 1) {
        res = 0; 
    } else if (j1 == 1) {
        res = 1 + solve(j1 + 1, j2 - 2);
    } else if (j2 == 1) {
        res = 1 + solve(j1 - 2, j2 + 1);
    } else {
        res = max(1 + solve(j1 + 1, j2 - 2), 1 + solve(j1 - 2, j2 + 1));
    }
    a[j1][j2] = res;
    return res;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    int a1, a2;
    cin >> a1 >> a2;

    forn(i, 201) {
        forn(j, 201) {
            a[i][j] = -1;
        }
    }
    cout << solve(a1, a2) << '\n';
    return 0;
}
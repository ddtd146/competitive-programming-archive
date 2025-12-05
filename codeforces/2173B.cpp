#include <algorithm>
#include <array>
#include <bitset> 
#include <climits>
#include <cstdint>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <iostream>
#include <list>
#include <map>
#include <queue>
#include <random>
#include <set>
#include <stack>
#include <string>
#include <utility>
#include <unordered_set>
#include <unordered_map>
#include <vector>

#define ll long long
#define uint unsigned int
#define pii pair <int , int>
#define pis pair <int, string>
#define vi vector<int>
#define vl vector<ll>

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

void solve(){
    int n;
    cin >> n;
    vl a(n+1), b(n+1);
    vector<vector<ll>> score(n+1, vector<ll>(2, 0));
    forn(i, n) cin >> a[i + 1];
    forn(i, n) cin >> b[i + 1];
    foru(i, 1, n) {
        score[i][0] = max(score[i-1][0] - a[i], b[i] - score[i-1][1]);
        score[i][1] = min(score[i-1][1] - a[i], b[i] - score[i-1][0]);
    }
    cout << score[n][0] << "\n";
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t = 1;
    cin >> t;
    w(t) {
        solve();
    }
    return 0;
}
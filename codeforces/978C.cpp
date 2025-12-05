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
    int n, m;
    cin >> n >> m;
    vector<ll> a(n);
    forn(i, n) {
        cin >> a[i];
        if (i > 0) a[i] += a [i-1];
    }
    forn(i, m) {
        ll b;
        cin >> b;
        int k = lower_bound(all(a), b) - a.begin();
        cout << k + 1 << " " << (k > 0 ? b - a[k-1] : b ) << "\n";
    }
}

// 

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t;
    t = 1;
    w(t) {
        solve();
    }
    return 0;
}
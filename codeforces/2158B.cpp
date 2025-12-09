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
    vi cnt(2*n+1, 0);
    forn(i, 2 * n) {
        int x;
        cin >> x;
        cnt[x]++;
    }
    int odds = 0;
    int evens = 0;
    int eevens = 0;
    foru(i, 1, 2 * n) {
        if (cnt[i] == 0) continue;
        if (cnt[i] % 2 == 1) ++ odds;
        if (cnt[i] % 4 == 2) ++ evens;
        if (cnt[i] % 4 == 0) ++ eevens;
    }
    if (odds > 0 || eevens % 2 == 0) cout << odds + 2 * evens + 2 * eevens << "\n";
    else cout << odds + 2 * evens + 2 * eevens - 2 << "\n";
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
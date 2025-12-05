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

const ll N = 1e18;

using namespace std;

ll count(ll n){
    int p[4] = {2, 3, 5, 7};
    ll cnt1 = 0, cnt2 = 0, cnt3 = 0, cnt4 = 0;
    forn(i, 4) {
        cnt1 += n / p[i];
        forn(j, 4) {
            if (i == j) continue;
            cnt2 += n / (p[i] * p[j]);
            forn(k, 4) {
                if (i == k || j == k) continue;
                cnt3 += n / (p[i] * p[j] * p[k]);
                forn(l, 4)  {
                    if (i == l || j == l || k == l) continue;
                    cnt4 += n / (p[i] * p[j] * p[k] * p[l]);
                }
            }
        }
    }
    return n - cnt1 + cnt2 / 2 - cnt3 / 6 + cnt4 / 24;
}

void solve(){
    ll l, r;
    cin >> l >> r;
    cout << count(r) - count(l-1) << "\n";
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
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
    ll x, y, k = 0;
    cin >> x >> y;
    if (x == y) {
        cout << -1 << "\n";
        return;
    }
    
    forn(bit, 33){
        int bitx = (x >> bit) & 1;
        int bity = ((y >> bit) & 1);
        int bitx1 = (x >> (bit+1)) & 1;
        int bity1 = (y >> (bit+1)) & 1;
        if ((bitx + bity == 1 && bitx1 + bity1 != 1) || bitx + bity == 2) {
            k += (1LL << bit);
            x += (1LL << bit);
            y += (1LL << bit);
        } 
    }
    cout << k  << "\n";
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
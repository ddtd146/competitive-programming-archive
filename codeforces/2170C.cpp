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
    int n; ll k;
    cin >> n >> k;
    vi q(n), r(n);
    forn(i, n) cin >> q[i];
    forn(i, n) cin >> r[i];    
    sort(all(q));
    sort(all(r));

    // c first pairs
    auto check = [&](int c) {
        forn(i, c) {
            if (1LL * (q[i] + 1) * (r[c - i - 1] + 1) - 1 > k) 
                return false;
        }
        return true;
    };

    int left = 0, right = n + 1; 
    while(right - left > 1) {
        int mid = (left + right) / 2;
        if (check(mid)) left = mid; 
        else right = mid;
    }
    cout << left << "\n";
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
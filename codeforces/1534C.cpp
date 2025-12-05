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
const int MOD = 1e9 + 7;

using namespace std;

void solve(){
    int n;
    cin >> n;
    vector<pii> a(n+1); 
    vector<int> next(n+1, -1);
    vector<int> mark(n+1, 0);  
    
    foru(i, 1, n) cin >> a[i].fi;
    foru(i, 1, n){
        cin >> a[i].se;
        next[a[i].fi] = a[i].se;
    }

    int i = 1;
    int k = 0;
    while(i <= n){
        if (mark[i] == 1 || i == next[i]) {
            ++i;
            continue;
        }
        mark[i] = 1;
        ++ k;
        int j = i;
        int cnt = 0;
        while((j = next[j]) != i){
            mark[j] = 1;
        }
    }

    ll res = 1;
    foru(i, 1, k) res = res * 2 % MOD;
    cout << res << "\n";
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
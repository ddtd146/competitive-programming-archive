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
    int n;
    cin >> n;
    vector<int> p(n);
    set<int> s;
    forn(i, n) {
        cin >> p[i];
        s.insert(p[i]);
    }

    int mn = n + 1;
    
    forn(i, n - 1) { 
        mn = min(mn, p[i]);
        
        if (mn == n - i) {
            cout << "No\n";
            return;
        }
    }
    
    cout << "Yes\n";

    
    vector<pii> res;
    mn = 1;
    int mx = 0;
    ford(i, n-1, 0){
        mx = max(mx, p[i]);
        s.erase(p[i]); 
        if (p[i] != mn) res.pb({mn, p[i]});
        if (p[i] == mn) {
            if (!s.empty()) {
                mn = *s.begin();
                res.pb({mn, mx});
            }
        }
    }
    for(auto e : res) cout << e.fi << " " << e.se << "\n";
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
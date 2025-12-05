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

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t;
    cin >> t;
    w(t){
        int n, s = 0;
        cin >> n;
        int a[n+2];
        foru(i, 1, n) {
            cin >> a[i];
            s += a[i];
        }
        if (s%2 != 0) {
            cout << -1 << '\n';
            continue;
        }
        vector<pii> res;
        foru(i, 1, n){
            if (s > 0 && a[i+1] == 1) {
                s-=2;
                res.pb({i, i+1});
                i++;
                continue;
            }
            if (s < 0 && a[i+1] == -1) {
                s+=2;
                res.pb({i, i+1});
                i++;
                continue;
            }
            res.pb({i, i});
        }
        cout << res.size() << '\n';
        forn(i, res.size()) cout << res[i].fi << ' ' << res[i].se << '\n';
    }    
    return 0;
}
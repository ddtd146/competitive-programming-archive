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

const int N = 23012003;

using namespace std;

vector<int> adj[1002];

int gcd(int x, int y){
    if (y == 0) return x;
    return gcd(y, x%y);
}

void pre(){    
    foru(i, 1, 1000) 
            foru(j, 1, 1000) 
                if (gcd(i, j) == 1) {
                    adj[i].pb(j);
                    adj[j].pb(i);
                }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t;
    cin >> t;
    pre();
    w(t){
        int n;
        cin >> n;
        int res = -1;
        int a[n+3];
        int pos[1002] = {0};
        foru(i, 1, n) {
            cin >> a[i];
            pos[a[i]] = i;
        }
        ford(i, n, 1) {
            for (auto x : adj[a[i]]) 
                if (pos[x] != 0) res = max(res, pos[x] + i); 
        }
        cout << res << "\n";
    }
    return 0;
}
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

const int N = 2e5 + 7;

using namespace std;

int n, k, u, v;
int depth[N] = {0}; // depth of node
int sz[N] = {0}; // number of nodes in subtree
int det[N] = {0};

vector<int> adj[N];

int dfs(int u, int p){
    depth[u] = depth[p] + 1;
    sz[u] = 1;
    for (auto &v : adj[u])
        if (v != p) sz[u] += dfs(v, u);
    det[u] = sz[u] - depth[u];
    return sz[u];
}

void solve(){
    cin >> n >> k;
    forn(i, n-1) {
        cin >> u >> v;
        adj[u].pb(v);
        adj[v].pb(u);
    }
    dfs(1, 0);
    nth_element(det+1, det+n-k, det+n+1, greater<int>());

    ll res = 0;
    foru(i, 1, n-k) res += det[i];
    cout << res;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t = 1;
    w(t) {
        solve();
    }
    return 0;
}

//Lemma: In the optimum solution, if a node (except the root) is chosen to develop tourism, its parent must be chosen to develop tourism, too.
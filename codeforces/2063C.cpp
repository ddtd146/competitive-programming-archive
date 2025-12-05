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


int find(int x, vector<int>& par){
    return par[x] < 0 ? x : find(par[x], par);
}

void merge(int x, int y, vector<int>& par, vector<int>& cnt){
    x = find(x, par);
    y = find(y, par);
    if (x != y) {
        if (cnt[x] > cnt[y]) swap(x, y);
        par[x] = y;
        cnt[x]++;
        cnt[y]++;
    }
    return;
}

void split(int u, int v, vector<int>& par, vector<int>& cnt){
    par[v] = 0;
    cnt[v] = 0;
    if (par[u] == 0) return;
    par[u] = -1; 
    cnt[u] --;
}

void solve(){
    int n;
    cin >> n;
    vector<int> par(n+1, -1);
    vector<int> cnt(n+1, 0);
    vector<int> adj[n+1];
    forn(i, n-1){
        int u, v;
        cin >> u >> v; 
        adj[u].pb(v);
        adj[v].pb(u);
        merge(u, v, par, cnt);
    }

    forn(i, 2){
        int v = max_element(all(cnt)) - cnt.begin() + 1;
        for (auto u : adj[v]) split(u, v, par, cnt);
    }
    cout << count(all(par), -1) << "\n";
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
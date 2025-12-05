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

const int N = 2e5+7;

using namespace std;

int n, x, y;
vector<int> adj[N];
bool vi[N] = {false};
bool path = false;
void dfs(int u, int target) {
    vi[u] = true;
    if(u == target) {
        path = true; 
        cout << u << " ";
        return;
    }
    for(auto v : adj[u]) {
        if (path) break;
        if (!vi[v]) dfs(v, target);
    }
    if (path) cout << u << " ";      
    vi[u] = false;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin >> n >> x >> y;
    foru(i, 1, n-1){
        int u, v;
        cin >> u >> v;
        adj[u].pb(v);
        adj[v].pb(u);
    }
    dfs(y, x);
    return 0;
}
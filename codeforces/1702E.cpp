#include<bits/stdc++.h>
#define N 200000+7
#define pii pair<int, int>

using namespace std;

int par[N], dist[N];
int v[N];
void make_set(int x){
    par[x] = -1;
    dist[x] = 0;
    v[x] = 0;
}

pii find_set(int x){
    if (par[x] < 0) return {x, 0};
    pii val = find_set(par[x]);
    par[x] = val.first;
    dist[x] = (dist[x] + val.second) % 2;
    return {par[x], dist[x]};
}

void union_sets(int x, int y, bool *res){
    pii rootX = find_set(x);
    pii rootY = find_set(y);
    if (rootX.first == rootY.first) {
        if (rootX.second == rootY.second) {
            *res = false;
        } 
    }
    else {
        x = rootX.first;
        y = rootY.first;
        if (par[x] > par[y]) swap(x, y);
        par[x] += par[y];
        par[y] = x;
        dist[y] = (rootX.second + rootY.second + 1) % 2;
    }
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        bool res = true;
        for(int i = 1; i <= n; ++i) make_set(i);
        for(int i = 1; i <= n; ++i) {
            int x, y;
            cin >> x >> y;
            v[x]++; v[y]++;
            if (v[x] >= 3 || v[y] >= 3 || x == y) res = false;
            if (res) union_sets(x, y, &res);
        }
        if (res) cout << "YES";
        else cout << "NO";
        cout << '\n';
    }
}
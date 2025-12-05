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

const int N = 1e5 + 3;

using namespace std;

int d[N] = {0};
int par[N];

int findSet(int x){
  if (par[x] == x) return x;
  return findSet(par[x]);
}

void unionSet(int x, int y){
  int parx = findSet(x);
  int pary = findSet(y);
  if (parx == pary) return;
  if (parx < pary) swap(parx, pary);
  par[parx] = pary;
  
}

int main(){
  ios::sync_with_stdio(0);
  cin.tie(0); cout.tie(0);
  int n, m;
  cin >> n >> m;
  forn(i, n) par[i+1] = i+1;
  forn(i, m) {
    int u, v;
    cin >> u >> v;
    unionSet(u, v);
  }
  int res = 0;
  forn(i, n) {
    int root = findSet(i+1);
    if (d[root] == 0) ++res;
    ++d[root];
  }
  cout << res;
  return 0;
}
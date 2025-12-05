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

const int N = 1e6 + 7;

using namespace std;

int a[N];
int st[21][N];
int n, m;

int rmq(int l, int r){
  int k = __lg(r - l + 1);
  return min(st[k][l], st[k][r - (1 << k) + 1]);
}

void createSegmentTree(){
  memset(st, INT_MAX, sizeof st);
  forn(i, n) st[0][i] = a[i];
  for(int i = 1; (1 << i) <= n; ++i){
    for (int j = 0; j + (1 << i) <= n; ++j){
      st[i][j] = min(st[i-1][j], st[i-1][j + (1 << (i - 1))]);
    }
  }
}


int main(){
  ios::sync_with_stdio(0);
  cin.tie(0); cout.tie(0);
  cin >> n;
  ll res = 0;
  forn(i, n) cin >> a[i];
  createSegmentTree();
  cin >> m;
  forn(i, m) {
    int l, r;
    cin >> l >> r;
    res += rmq(l, r);
  }
  cout << res;
  return 0;
}
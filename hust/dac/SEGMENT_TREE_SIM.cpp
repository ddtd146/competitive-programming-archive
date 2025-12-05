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

const int N = 1e5+6;

using namespace std;

int a[N] = {0};
int ST[4*N] = {0};

void update(int id, int l, int r, int pos, int val){
  if (pos < l || pos > r) return;
  if (l == r) {
    ST[id] = val;
    return;
  }
  int mid = (l + r) / 2;
  update(id*2, l, mid, pos, val);
  update(id*2+1, mid+1, r, pos, val);
  ST[id] = max(ST[id*2], ST[id*2+1]);
  return;
}

int get(int id, int l, int r, int q_l, int q_r){
  if (q_l <= l && r <= q_r) return ST[id];
  if (r < q_l || l > q_r) return 0;
  int mid = (l + r) / 2;
  return max(get(id*2, l, mid, q_l, q_r), get(id*2+1, mid+1, r, q_l, q_r));
}

int main(){
  ios::sync_with_stdio(0);
  cin.tie(0); cout.tie(0);
  int n;
  cin >> n;
  foru(i, 1, n) {
    cin >> a[i];
    update(1, 1, n, i, a[i]);
  }
  int q;  
  cin >> q;
  forn(i, q){
    string s;
    int x, y;
    cin >> s >> x >> y;
    if (s[0] == 'g'){
      cout << get(1, 1, n, x, y) << '\n';
    } else{
      a[x] = y;
      update(1, 1, n, x, y);
    }
  }
  return 0;
}
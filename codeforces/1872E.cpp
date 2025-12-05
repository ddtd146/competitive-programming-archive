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

const int N = 1e5 + 7;

using namespace std;

int main(){
  ios::sync_with_stdio(0);
  cin.tie(0); cout.tie(0);
  int t, n, q, tp, l, r, g;
  int a[N];
  int prefiXor[N];
  int res; 
  string s;
  cin >> t;
  w(t){
    cin >> n;
    prefiXor[0] = 0;
    res = 0;
    foru(i, 1, n) {
      cin >> a[i];
      prefiXor[i] = prefiXor[i-1] ^ a[i];
    }
    cin >> s; 
    forn(i, n) 
      if (s[i] == '1') res = res ^ a[i+1];
    cin >> q;
    w(q){
      cin >> tp; 
      if (tp == 1) {
        cin >> l >> r;
        res = res ^ prefiXor[r] ^ prefiXor[l-1];
      } else {
        cin >> g; 
        if (g == 1) cout << res << ' ';
        else cout << (prefiXor[n] ^ res) << ' ';
      }
    }
    cout << '\n';
  }
  return 0;
}
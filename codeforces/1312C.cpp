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

const int N = 1e5;

using namespace std;

int main(){
  ios::sync_with_stdio(0);
  cin.tie(0); cout.tie(0);
  int t, n, k; 
  ll a[N];
  cin >> t;
  w(t) {
    bool res = true;
    cin >> n >> k;
    foru(i, 1, n) cin >> a[i];
    ll powk = 1; 
    while(powk < (ll) 1e16) powk *= k;
    while (powk >= 1) {
      int cnt = 0, pos = 0;
      foru (i, 1, n) 
        if (a[i] >= powk) {
          ++ cnt;
          pos = i;
        }
      if (cnt > 1) {
        res = false; 
        break;
      } 
      if (pos > 0) a[pos] -= powk;
      powk /= k;
    }
    foru(i, 1, n)
      if (a[i] != 0) {
        res  = false; 
        break;
      }
    cout << (res ? "YES\n" : "NO\n");
  }
  return 0;
}
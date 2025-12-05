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

int d[N][31], a[N];

int main(){
  ios::sync_with_stdio(0);
  cin.tie(0); cout.tie(0);
  int t, n, q, k, l;
  
  cin >> t; 
  w(t) {
    cin >> n;
    d[0][0] = 0;
    foru(i, 1, n) {
      cin >> a[i];
      forn(j, 30) {
        if (a[i] & (1 << j)) d[i][j] = d[i-1][j] + 1;
        else d[i][j] = d[i-1][j];
      }      
    }
    cin >> q; 
    w(q){
      cin >> l >> k; 
      if (a[l] < k) {
        cout << -1 << ' '; 
        continue;
      }
      int lo = l; 
      int hi = n;
      int res = l;
      while(lo <= hi) {
        int mid = (lo + hi) / 2;
        int val = 0;
        forn(j, 30) 
          if (d[mid][j] - d[l-1][j] == mid - l + 1) {
            val += (1 << j);
          }
        if (val >= k) {
          res = max(res, mid);
          lo = mid + 1;
        } 
        else hi = mid - 1; 
      }
      cout << res << ' ';
    }
    cout << '\n';
  }
  return 0;
}
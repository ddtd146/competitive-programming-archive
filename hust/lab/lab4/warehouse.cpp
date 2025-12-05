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

const int N = 1000+7;
const int T = 100+7;

using namespace std;

int main(){
  ios::sync_with_stdio(0);
  cin.tie(0); cout.tie(0);
  int w[N], c[N];
  int dp[N][T];
  int n, t, d;
  cin >> n >> t >> d;
  foru(i, 1, n) cin >> w[i];
  foru(i, 1, n) cin >> c[i];
  memset(dp, 0, sizeof dp);
  dp[1][c[1]] = w[1];
  int res = w[1];
  foru(i, 2, n){
    foru(j, c[i], t){
      foru(k, 1, d){
        if (i > k)
        dp[i][j] = max(dp[i][j], dp[i-k][j-c[i]] + w[i]);
      }
      res = max(res, dp[i][j]);
    }
  }
  cout << res;
  return 0;
}
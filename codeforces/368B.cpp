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
  int n, m; 
  int a[N+7], d[N+7] = {0}, dp[N+7] = {0};
  cin >> n >> m;
  foru(i, 1, n) cin >> a[i];
  ford(i, n, 1) {
    if (d[a[i]] > 0) dp[i] = dp[i+1];
    else {
      dp[i] = dp[i+1] + 1;
      ++d[a[i]];
    }
  }
  foru(i, 1, m) {
    int l;
    cin >> l;
    cout << dp[l] << '\n';
  }
  return 0;
}
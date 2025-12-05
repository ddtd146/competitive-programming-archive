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

const int N = 1e6;

using namespace std;

int main(){
  ios::sync_with_stdio(0);
  cin.tie(0); cout.tie(0);
  int n;
  ll a[N+7] = {0};
  ll res = 0;
  scanf("%d", &n);
  foru(i, 1, n) {
    scanf("%d", &a[i]);
    a[i] += a[i-1];
  } 
  ll even = 0;
  ll odd = 0;
  foru(i, 1, n) {
    if (a[i] % 2 == 0){
      res = max(res, a[i] - even);
      even = min(a[i], even);
    } else{
      if (odd != 0) res = max(res, a[i] - odd);
      odd = min(a[i], odd);
    }
  }
  printf("%lld", res);
  return 0;
}
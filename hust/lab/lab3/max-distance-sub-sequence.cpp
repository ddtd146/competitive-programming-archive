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

const int N = 100000;

using namespace std;
int k, n, a[N+7];

bool check (int distance) {
  int cnt = 1;
  int i = 0,  cur = 1;
  while (i < n - 1) {
    while (cur < n && a[cur] - a[i] < distance)  ++cur;
    if (cur < n) cnt++;
    if (cnt >= k) return true;   
    i = cur;
    cur++;
  }
  return false;
}

int cut(int l, int r){
  while(l <= r){
    int mid = (l+r) / 2;
    if (check(mid)) l = mid + 1;
    else r = mid - 1;
  }
  return r;
}

int main(){
  ios::sync_with_stdio(0);
  cin.tie(0); cout.tie(0);
  int t;
  scanf("%d", &t);
  w(t){
    scanf("%d%d", &n, &k);
    forn(i, n) scanf("%d", &a[i]);
    sort(a, a+n);
    printf("%d\n", cut(0, a[n-1]-a[0]));
  }  
  return 0;
}



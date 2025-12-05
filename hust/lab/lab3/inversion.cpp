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

const int N = 1000000;
const ll MOD = 1000000007;

using namespace std;

int a[N+7];

void merge(int l, int r, int mid){
  int i = l;
  int j = mid+1;
  int tmp[r+1];
  foru (i, l, r) tmp[i] = a[i];
  int cur = l-1;
  while(i <= mid || j <= r) {
    cur++;
    if ((tmp[i] > tmp[j] && j <= r) || i > mid){
      a[cur] = tmp[j];
      j++;
    } else
    if ((tmp[i] <= tmp[j] && i <= mid) || j > r){
      a[cur] = tmp[i];
      i++;
    }
  }
}

ll cntCross(int l, int r, int mid){
  ll res = 0;
  int i = l;
  int j = mid+1;
  while ((i <=mid) && (j <= r)){
    if (a[i] > a[j]) {
      res += mid - i + 1;
      j++;
    } else {
      i++;
    }
  }
  return res;
}

ll cntPair(int l, int r){
  // int tmp[r+1];
  // foru (i, l, r) tmp[i] = a[i];
  if (l == r) return 0;
  if (r == l + 1) { 
    if (a[l] > a[r]) {
      int tmp = a[l]; 
      a[l] = a[r];
      a[r] = tmp;
      return 1;
    } else{
      return 0;
    }
  }
  int mid = (l + r) / 2;
  ll left = cntPair(l, mid) % MOD;
  ll right = cntPair(mid+1, r) % MOD;
  ll cross = cntCross(l, r, mid) % MOD;
  // sort(a+l, a+mid+1);
  // sort(a+mid+1, a+r+1);
  merge(l, r, mid);
  return (left + right + cross) % MOD; 
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int n;
    cin >> n;
    forn(i, n) cin >> a[i];
    cout << cntPair(0, n-1) << '\n';
    return 0;
}
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

const int N = 1e5+7;

using namespace std;

int main(){
  ios::sync_with_stdio(0);
  cin.tie(0); cout.tie(0);
  int n, k;
  int a[N];
  int sum = 0, len = 0;
  double res = -1e5;
  double avg;
  cin >> n >> k;
  a[0] = 0;
  int j = 1;
  foru(i, 1, n) {
    len = i - j;
    cin >> a[i];
    if (len < k) {
      sum += a[i];
      len ++;
    }
    else {
      avg = 1.0 * sum / len;
      if (avg <= a[i]) {
        len ++;
        sum += a[i];
      } else if (a[j] <= a[i] && a[i] < avg) {
        sum -= a[j];
        sum += a[i];
        j++;
      } else{
        res = max(res, avg);
        j = i;
        sum = a[j];
        len = 1;
      }
    }
  }
  printf("%.5lf", res);
  return 0;
}
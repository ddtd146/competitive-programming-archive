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
#include <iomanip>

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

const int N = 14062003;

using namespace std;

long long nCr(int m, int n) {
    if (n > m) return 0;
    if (n > m - n) n = m - n; 
    long long res = 1;
    forn(i, n) {
        res *= (m - i);
        res /= (i + 1);
    }
    return res;
}


int main(){
  ios::sync_with_stdio(0);
  cin.tie(0); cout.tie(0);
  string s1, s2;
  int s = 0, cnt = 0;
  cin >> s1 >> s2;
  forn(i, s1.size()) {
    if (s1[i] == '+') s += 1;
    if (s1[i] == '-') s -= 1;
    if (s2[i] == '+') s -= 1;
    if (s2[i] == '-') s += 1;
    if (s2[i] == '?') cnt++;
  } 
  double res;
  if (cnt == 0) res = (double) (s == 0); 
  else {
    s = (s + cnt) / 2;
    if (s < 0) res = 0.0;
    else res = (double) nCr(cnt, s) / (1 << cnt);
  }
  cout << fixed << setprecision(12) << res;
  return 0;
}
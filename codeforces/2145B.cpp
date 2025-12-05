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

const int N = 14062003;

using namespace std;

int main(){
  ios::sync_with_stdio(0);
  cin.tie(0); cout.tie(0);
  int t, n, k;
  cin >> t;
  w(t){
    cin >> n >> k;
    string s;
    cin >> s;
    int top = 0; 
    int bottom = n+1;
    int cnt = 0;
    forn(i, k){
      if (s[i] == '0') top ++;
      if (s[i] == '1') bottom --;
      if (s[i] == '2') {
        cnt ++;
      }
    }
    foru(i, 1, n) {
      if (i <= top || i >= bottom)  cout << '-';
      else if (n - top - (n - bottom + 1) == cnt) cout << '-';
      else if (i <= top + cnt || i >= bottom - cnt) cout << '?';
      else cout << '+';
    }
    cout << '\n'; 
  }
  return 0;
}
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

int d[22][22];
int a[22];
int n;
int res = INT_MAX;
int c = 0;
bool visited[22];

void tri(int i){
  if (i == n) {
    c += d[a[i-1]][a[i]];
    res = min (res, c);
    c -= d[a[i-1]][a[i]];
    return;
  }  
  foru(j, 2, n){
    if (!visited[j]) {
      a[i] = j;
      if (c + d[a[i-1]][a[i]] >= res) continue;
      visited[j] = true;
      c += d[a[i-1]][a[i]];
      tri(i + 1);
      visited[j] = false;
      c -= d[a[i-1]][a[i]];
    }
  }
}

int main(){
  ios::sync_with_stdio(0);
  cin.tie(0); cout.tie(0);
  cin >> n;
  foru(i, 1, n) 
    foru(j, 1, n)   
      cin >> d[i][j];
  a[0] = 1;
  a[n] = 1;
  memset(visited, false, sizeof visited);
  tri(1);
  cout << res;
  return 0;
}
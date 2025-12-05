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

int a[7] = {10010, 1000, 1000, 100, 100, 10, 2};
vector<bool> marked(7, false);

int res = 0;

void tri(int i, int N){
  if (i == 7){
    if (N == 0) ++res;
    return;
  }
  forn(j, 10) {
    if ((i == 1 || i == 0) && j == 0 || marked[j]) continue;
    if (j * a[i] > N) break;
    marked[j] = true;
    tri(i+1, N - j * a[i]);
    marked[j] = false;
  }
}

int main(){
  ios::sync_with_stdio(0);
  cin.tie(0); cout.tie(0);
  int t;
  cin >> t;

  w(t){
    int N;
    res = 0;
    cin >> N;
    tri(0, N);
    cout << res << '\n';
  }
  return 0;
}
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

const int N = 10;

using namespace std;

// int n;
// int a[N+1];
// int mark[N+1];

// void tri(int i){
//   if (i == n+1) {
//     foru(j, 1, n) cout << a[j] << " ";
//     cout << '\n';
//     return;
//   } 
//   foru(j, 1, n){
//     if (mark[j] == 0) {
//       a[i] = j;
//       mark[j] = 1;
//       tri(i+1);
//       mark[j] = 0;
//     }
//   }
// }

// int main(){
//   ios::sync_with_stdio(0);
//   cin.tie(0); cout.tie(0);
  
//   cin >> n;
//   memset(mark, 0 , sizeof mark);
//   tri(1);
//   return 0;
// }


int n;
int a[N+2];
int main(){
  ios::sync_with_stdio;
  cin.tie(0); cout.tie(0);
  cin >> n;
  foru(i, 1, n) a[i] = i;
  
}
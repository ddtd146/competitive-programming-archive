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
  int n; string s; string res = "";
	long t = 1;
	int fact[10]; 
	fact[1] = 1;
	foru(i, 2 , 9) fact[i] = fact[i-1] * i;
	cin >> n;
	cin >> s;
	forn(i, n){
		int x = s[i] - '0';
		if (x > 0) t *= fact[x];
	}
	foru (i, 2, 9){
		if (t == 1) break;
		while(t % fact[i] == 0) {
			res = to_string(i) + res;
			t /= fact[i];
		}
	}
	cout << res;
  return 0;
}
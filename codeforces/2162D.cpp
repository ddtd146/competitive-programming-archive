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

int query(int type, int l, int r){
	cout << type << " " << l << " " << r << '\n';
	fflush(stdout);
	int response; 
	cin >> response;
	return response;
}

void submit(int l, int r){
	cout << "! " << l << " " << r << '\n';
	fflush(stdout);
}

int main(){
	int t;
	cin >> t;
	w(t){
		int n;
		cin >> n;
		int k = query(2, 1, n) - query(1, 1, n);
		int low = 1, high = n;
		int r = n;
		while (low <= high) {
			int mid = low + (high - low) / 2;
			int d = query(2, 1, mid) - query(1, 1, mid);
			if (d == k) {
				r = mid;
				high = mid - 1;
			} else 
				low = mid + 1;
			}
		int l = r - k + 1;
		submit(l, r);
	}	
	return 0;
}
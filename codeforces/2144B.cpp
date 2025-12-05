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

void solve(){
    int n;
    cin >> n;
    vector<int> a(n+1);
    ll s = 0;
    int pos = 0; 
    int cnt0 = 0;
    foru(i, 1, n) {
        cin >> a[i];
        s += a[i];
        if (a[i] == 0) {
            pos = i;
            cnt0 ++;
        }
    }
    if (cnt0 == 1) a[pos] = 1LL * n*(n+1)/2 - s;
    int aposTr = a[pos];
    int l = 0; 
    int r = -1;
    foru(i, 1, n){
        if (a[i] != i || a[i] == 0) {
            if (l == 0) l = i;
            r = i;
        }
    }
    cout << r - l + 1 << "\n";
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t = 1;
    cin >> t;
    w(t) {
        solve();
    }
    return 0;
}
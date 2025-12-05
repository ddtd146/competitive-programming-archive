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

ll nCr(int n, int r){
    double sum = 1; 
    foru(i, 1, r){
        sum = sum * (n - r + i)/i;
    }
    return (ll) sum;
}

void solve(){
    int n;
    ll res = 0;
    cin >> n;
    vector<int> a(n);
    int f = 1; 
    int d = 0; 
    forn(i, n) {
        cin >> a[i];
    }
    sort(all(a));
    foru(i, 1, n - 1) {
        if (a[i] == a[i-1]){
            f++;
        }
        if (a[i] != a[i-1] || i == n-1) {
            res += nCr(f, 3) + nCr(f, 2) * d;
            f = 1;
            d = i;
        }
        
    }
    cout << res << '\n';
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t;
    cin >> t;
    w(t){
        solve();
    }
    return 0;
}
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
    int t, q;
    cin >> t;
    w(t){
        int n;
        cin >> n >> q;
        ll a[n+3];
        ll x[n+3] = {0};
        ll s[n+3] = {0};
        foru(i, 1, n) {
            cin >> a[i];
            x[i] = x[i-1] ^ a[i];
            s[i] = s[i-1] + a[i];
        }
        int l, r;
        cin >> l >> r;
        ll res = s[n] - x[n];
        int j = 1;
        foru(i, 1, n) {
            if (j < i) j = i;
            while(j <= n && s[j] - s[i-1] - (x[j] ^ x[i-1]) < res) ++j;
            if (j > n) break;
            if (r - l > j - i) {
                r = j;
                l = i;
            }
        }
        cout << l << " " << r << '\n';
    }    
    return 0;
}

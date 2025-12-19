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
#define vi vector<int>
#define vl vector<ll>

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

int msb(int n) {
    int msb = 0;
    while ((1 << (msb + 1)) <= n) {
        msb++;
    }
    return msb;
}

void solve(){
    int n, k;
    cin >> n >> k;
    if (k % 2 == 1) {
        forn(i, k) cout << n << " ";
        cout << "\n";
    } else {
        int b = msb(n);
        if ((1 << b) == n){
            forn(i, k-1) cout << n << " ";
            cout << 0 << "\n";
        }
        else { 
            int a = msb(n - (1 << b));
            int x = 1 << a;
            ford(i, a-1, 0) 
                if (((n >> i) & 1) == 0) 
                    b |= (1 << i);
            forn(i, k-2) cout << n << " ";
            cout << x << " " << (n ^ x) << "\n";
        }

    }
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
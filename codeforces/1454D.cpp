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

const ll N = 1e10 + 7;

using namespace std;

void solve(){
    ll n; 
    cin >> n;

    ll maxCnt = 0;    
    ll modPrime = -1; 
    ll x = n; 

    for (ll prime = 2; prime * prime <= n; ++prime) {
        if (n % prime == 0) {
            ll cnt = 0; 
            while (n % prime == 0) {
                cnt++;
                n /= prime;
            }
            if (cnt > maxCnt) {
                maxCnt = cnt;
                modPrime = prime;
            } 
        }
    }
    if (n > 1) {
        ll cnt = 1;
        if (cnt > maxCnt) {
            maxCnt = cnt; 
            modPrime = n;
        }
    }
    cout << maxCnt << "\n";
    forn(i, maxCnt) 
        if (i < maxCnt - 1) {
            cout << modPrime << " ";
            x /= modPrime; 
        }
        else cout << x << "\n";
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
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

ll lcm(ll a, ll b){
    return a * b / __gcd(a, b);
}

void solve(){
    int n;
    cin >> n;
    vector<ll> k(n);
    ll z = 1;
    forn(i, n) {
        cin >> k[i];
        z = lcm(z, k[i]);
    }

    ll sum = 0;
    forn(i, n) sum += z / k[i];

    if (sum < z) {
        forn(i, n) cout << z / k[i] << " ";
        cout << "\n";
    } else cout << -1 << "\n";

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
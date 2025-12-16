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

void solve(){
    int n;
    cin >> n;
    vi a(n);
    forn(i, n) cin >> a[i];
    sort(all(a), greater<int>());
    vi odds, evens;
    vl res(n+1, 0);
    copy_if(all(a), back_inserter(evens), [](int x) { return (x % 2 == 0);});
    copy_if(all(a), back_inserter(odds), [](int x) { return (x % 2 == 1);});
    if (odds.size() == 0) {
        forn(i, n) cout << 0 << " ";
        cout << "\n";
        return;
    }
    int j = 0;
    foru(i, 1, n) {
        if (i == 1) res[i] = odds[0];
        else if (i <= evens.size() + 1) 
            res[i] = res[i-1] + evens[j++];
        else if (i == n && odds.size() % 2 == 0) res[i] = 0;
        else res[i] = res[i-2]; 
    }
    forn(i, n) cout << res[i+1] << " ";
    cout << "\n";
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
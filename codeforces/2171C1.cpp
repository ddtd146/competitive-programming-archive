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
    vector<int> a(n+1), b(n+1);
    forn(i, n) cin >> a[i+1];
    forn(i, n) cin >> b[i+1];
    int total = 0;
    int x = 0, y = 0; //x -> aji last move, y -> mai last turn 
    foru(i, 1, n) {
        total = total ^ a[i] ^ b[i];
        if (a[i] != b[i]) 
            if (i % 2 == 1) {
                x = i;
            }
            else {
                y = i;
            }
    }
    if (total == 0) {
        cout << "Tie\n";
        return;
    }

    if (x > y) cout << "Ajisai\n";
    if (x < y) cout << "Mai\n";
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
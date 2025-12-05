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

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    forn(i, n) cin >> a[i];
    sort(all(a));
    int f = 1; // frequenciy
    int maxf = 1;
    foru(i, 1, n-1){
        if (a[i] == a[i-1]) ++ f;
        if (a[i] != a[i-1] || i == n-1) {
            maxf = max(maxf, f);
            f = 1;
        }
    }
    int opCnt = 0;
    while(maxf < n) {
        int c = min(maxf, n - maxf);
        maxf += c;
        opCnt += 1 + c;
    }
    cout << opCnt << '\n';
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
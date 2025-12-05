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

const int N = 2e5+7;

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int n, m;
    cin >> n >> m;
    ll a[N], s[N] = {0}, ss[N] = {0};    
    foru(i, 1, n) {
        cin >> a[i];
        s[i] = s[i-1] + a[i];
        ss[i] = ss[i-1] + a[i] * i;
    }
    ll res = -LLONG_MIN;
    foru(i, m, n){
        res = max(res, ss[i] - ss[i-m] - (i-m)*(s[i] - s[i-m]));
    }
    cout << res;
    return 0;
}
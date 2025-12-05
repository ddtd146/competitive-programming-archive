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

#define N 23012003

using namespace std;

const int mod = 998244353;
int t, n;
struct wld{
    ll wins;
    ll loses;
    ll draw; 
};

wld res[60+7];

ll C[60+7][60+7];

void calcC(){
    memset(C, 0, sizeof C);
    C[1][0] = 1;
    C[1][1] = 1;
    foru(i, 2, 60) C[i][0] = 1;
    foru(i, 2, 60)
        foru(j, 1, i)
            C[i][j] = C[i-1][j-1] +  C[i-1][j] % mod;
}

void preprocess(){
    res[2] = {1, 0, 1};
    for (int i = 4; i <= 60; i += 2){
        res[i].wins = (res[i-2].loses + C[i-1][i/2]) % mod;
        res[i].loses = (C[i][i/2] - 1 - res[i].wins) % mod;
        res[i].draw = 1;
    }
}

void solv(int n){
    cout << res[n].wins << " " << res[n].loses << " " << res[n].draw << '\n';
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin >> t;
    calcC();
    preprocess();
    w(t){
        cin >> n;
        solv(n);
    }
    return 0;
}
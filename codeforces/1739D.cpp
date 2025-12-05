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

#define N 2*100000+7

using namespace std;

int t, n, k;
int p[N], d[N];

void inp(){
    cin >> n >> k;
        d[1] = 0;
        foru(i, 2, n) cin >> p[i];
}

// we can use dfs but this approach more efficient
// bottom up from leaves
bool chekc(int height){
    int res = 0;
    foru(i, 2, n) d[i] = 1;
    ford(i, n, 2) {
        if (d[i] == height && p[i] != 1) ++res; //cut
        else d[p[i]] = max(d[p[i]], d[i] + 1); // update height
    }
    return (res <= k);
}

void solv(){
    int l = 1; 
    int r = n;
    while(l <= r){
        int mid = (l+r)/2;
        if (chekc(mid)) r = mid - 1;
        else l = mid + 1;
    }
    cout << l << '\n';
}

int main(){
    cin >> t;
    w(t){
        inp();
        solv();
    }
}
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
    int a[N+7];
    int t;
    cin >> t;
    w(t){
        int n;
        cin >> n;
        int res = 0;
        int prefixMax = 0;
        foru(i, 1, n) {
            cin >> a[i];
            prefixMax = max(prefixMax, a[i]);
            if (i % 2 == 0) a[i] = prefixMax;
        }
        a[0] = a[2];
        a[n+1] = a[n-1];
        foru(i, 1, n){
            if (i % 2 == 1 && (a[i] >= a[i-1] || a[i] >= a[i+1])) 
                res += a[i] - min(a[i-1], a[i+1]) + 1;
        }
        cout << res << '\n';
    }
    return 0;
}
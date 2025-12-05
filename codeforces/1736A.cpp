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

const int N = 23012003;

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t;
    cin >> t;
    w(t){
        int n;
        cin >> n;
        int a[n+7], b[n+7];
        int d = 0;
        int d1 = 0;
        foru(i, 1, n){
            cin >> a[i];
        }
        foru(i, 1, n){
            cin >> b[i];
        }
        foru(i, 1, n){
            if (a[i] == b[i]) continue;
            if (a[i] == 1) ++d1; // dem a = 1;
            if (a[i] == 0) ++ d; // dem a = 0;
        }
        if (min(d1, d) > 0) cout << 1 + abs(d1 - d) << '\n';
        else cout << max(d1, d) << '\n';
    }
    return 0;
}   
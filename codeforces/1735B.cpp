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

#define N 107

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t;
    int a[N+7];
    cin >> t;
    w(t){
        int n;
        int m = INT_MAX;
        
        ll res = 0;
        cin >> n;
        foru(i, 1, n) {
        cin >> a[i];
            m = min(m, a[i]);
        }
        foru(i, 1, n){
            if (a[i] >= 2*m) {
                int k = (a[i] / (a[i] / (2*m) + 1));
                if (a[i] % k == 0) res += a[i] / k - 1;
                else {
                    if (a[i] % k  <= (2*m - 1 - k)*(a[i] / k)) res += a[i] / k - 1;
                    else res += a[i] / k;
                }
            }
        }
        cout << res << '\n';
    }    
    return 0;
}
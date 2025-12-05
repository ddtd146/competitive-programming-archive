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

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t;
    cin >> t;
    w(t){
        int n, cnt = 0;
        cin >> n;
        int lsb[n+2] = {0};
        foru(i, 1, n) {
            int x;
            cin >> x;
            lsb[i] = __builtin_ctz(i);
            cnt += __builtin_ctz(x);
        }
        cnt = n - cnt;
        if (cnt <= 0) {
            cout << 0 << '\n';
            continue;
        } 
        sort(lsb+1, lsb+1+n, greater<int>());
        foru(i, 1, n) {
            lsb[i] += lsb[i-1];
            if (lsb[i] >= cnt) {
                cout << i << '\n';
                cnt = n+1; 
                break;
            }
        }
        if (cnt <= n) cout << -1 << '\n';
    }
    return 0;
}
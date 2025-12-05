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

int t;

bool solv(string s, int n, int k){
    int d = 0;
    int res = 0;
    int d1 = 0;
    int a[n+7] = {0};
    forn(i, n){
        a[i+1] = s[i] - '0';
        if (a[i] == 1) ++d1; // dem so 1
    }
    if (d1 > k) return false;
    foru(i, 1, n){
        if (a[i] == 0) {
            if (res > 0) break;
            continue;
        }
        ++d;
        if (a[i] == 15) ++d1;
        if (d > k) {
            d--;
            if (a[i-k] == 15) --d1;
        }
        if (d == k && d1 == k) ++ res;
    }
    if (res == 1) return true; 
    return false;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int n, k; 
    cin >> t;
    w(t){
        string s;
        cin >> n >> k;
        cin >> s;
        if (solv(s, n, k)) cout << "Yes" << '\n';
        else cout << "No" << '\n';
    }
    return 0;
} 
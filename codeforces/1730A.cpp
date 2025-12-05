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

#define N 103

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t, n, c;
    cin >> t;
    w(t){
        cin >> n >> c;
        int res = 0;
        int cnt[N];
        memset(cnt, 0, sizeof cnt);
        foru(i, 1, n) {
            int x;
            cin >> x;
            cnt[x]++;
        }
        foru(i, 0, 100)
            if (cnt[i] > c) res += c;
            else if (cnt[i] > 0) res += cnt[i];
        cout << res << '\n';
    }
    return 0;
}
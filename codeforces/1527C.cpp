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

#define N 100000+7

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t, n;
    int a[N];
    ll dp[N];
    cin >> t;
    w(t){
        cin >> n;
        map<int, ll> mp;
        foru(i, 1, n) cin >> a[i];
        dp[1] = 0;
        mp[a[1]]++;
        ll res = 0;
        foru(i, 2, n){
            dp[i] = dp[i-1];
            if (mp.count(a[i])) dp[i] += mp[a[i]]; 
            mp[a[i]] += i;
            res += dp[i];
        }
        cout << res << '\n';    
    }
    return 0;
}
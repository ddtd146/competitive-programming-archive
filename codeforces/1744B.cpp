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

void solv(){
    int n, q;
    cin >> n >> q;
    int a[n+2];
    ll sum[2] = {0};
    int cnt[2] = {0};
    foru(i, 1, n) {
        int x;
        cin >> x;
        sum[x%2] += x;
        cnt[x%2] += 1;
    }
    w(q){
        int typ, val;
        cin >> typ >> val;
        if (val % 2 == 0) {
            sum[typ] += cnt[typ] * val;
        } else{
            sum[1-typ] += sum[typ] + cnt[typ] * val; 
            cnt[1-typ] = n;
            sum[typ] = 0;
            cnt[typ] = 0;
        }
        cout << sum[0] + sum[1] << '\n';
    }
    
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t;
    cin >> t;
    w(t){
        solv();
    }    
    return 0;
}
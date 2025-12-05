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
    int n;
    vector<int> a, b;
    cin >> n;
    foru(i, 1, n) {
        int x;
        cin >> x;
        if (x % 2 == 0) a.pb(x);
        else b.pb(x);
    }
    sort(a.begin(), a.end(), greater<int>());
    sort(b.begin(), b.end(), greater<int>());
    if (a.size() < 2 && b.size() < 2) cout << -1; 
    else {
        if (a.size() < 2) cout << b[0] + b[1];
        else if (b.size() < 2) cout << a[0] + a[1];
            else cout << max(a[0]+a[1], b[0] + b[1]);
    }
    return 0;
}
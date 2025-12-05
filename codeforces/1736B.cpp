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

int gcd(int x, int y){
    if (y == 0) return x;
    return gcd(y, x%y);
}

int lcm(int x, int y){
    int d = gcd(x, y);
    return x*y / d;
}

bool check(int a[], int b[], int n){
    foru(i, 1, n){
        if (gcd(b[i], b[i+1]) != a[i]) return false;
    }
    return true;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t;
    cin >> t;
    w(t){
        int n;
        cin >> n;
        int a[n+7]; 
        int b[n+7];
        foru(i, 1, n){
            cin >> a[i];
            if (i == 1) b[i] = a[i];
            if (i >= 2) b[i] = lcm(a[i], a[i-1]);
        }
        b[1] = a[1];
        b[n+1] = a[n];
        if (check(a, b, n)) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}
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

bool check(int a[], string s, int n){
    int d[50+2] = {0};
    forn(i, n) {
        if (d[a[i]] == 0) d[a[i]] = s[i] - 'a' + 1;
        else if (s[i] - 'a' + 1 != d[a[i]]) return false;
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
        int a[n+2];
        string s;
        forn(i, n) cin >> a[i];
        cin >> s;
        if (check(a, s, n)) cout << "YES\n";
        else cout << "NO\n";
    }    
    return 0;
}
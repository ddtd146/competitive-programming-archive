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

int c[8] = {0};
string s;

bool check(){
    if (s[0] == '1')return false;
    int l, r, mid;
    foru(i, 1, 7) {
        if (c[i] != 0) r = i;
    }
    ford(i, 7, 1) 
        if (c[i] != 0) l = i;
    if (l == r) return false;
    foru(i, l, r) if (c[i] == 0) return true;
    return false;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin >> s;
    
    c[1] = s[6] - '0'; c[2] = s[3] - '0';
    c[3] = s[1] - '0' + s[7] - '0';
    c[4] = s[0] - '0' + s[4] - '0';
    c[5] = s[2] - '0' + s[8] - '0';
    c[6] = s[5] - '0'; c[7] = s[9] - '0';
    if (check()) cout <<"Yes";
    else cout << "No";
    return 0;
}
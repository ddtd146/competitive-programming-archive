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

struct Point {
    int x;
    int y;
} p[4+1];

bool check(){
    forn(i, 4){
        int j = (i+1)%4;
        int k = (i+2)%4;
        int r = - (p[i].x - p[j].x) * (p[k].y - p[j].y) + (p[i].y - p[j].y) * (p[k].x - p[j].x);
        if (r < 0) return false;
    }
    return true;    
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    forn(i, 4) cin >> p[i].x >> p[i].y;
    if (check()) cout << "Yes\n";
    else cout << "No\n";        
    return 0;
}
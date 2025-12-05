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

int cnt(int goal, int wall, int hammer){
    int res = 0;
    if (goal > 0 && (wall > goal || wall < 0)) return goal;
    if (goal < 0 && (wall < goal || wall > 0)) return abs(goal);
    if (goal > wall && hammer > wall) return -1;
    if (goal < wall && hammer < wall) return -1;
    return abs(hammer) + abs(wall - hammer) + abs(goal - wall); 
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int x, y, z;
    cin >> x >> y >> z;
    cout << cnt(x, y, z);
    return 0;
}
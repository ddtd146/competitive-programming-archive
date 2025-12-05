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

int res = 0;
bool p[5] = {false};
void solv(int x){
    if (x >= 4) {
        x -= 4;
        if (!p[4]) res += 4;
        p[4] = true;
    }
    if (x >= 2){
        x -= 2;
        if (!p[2]) res += 2;
        p[2] = true;
    }
    if (x >= 1){
        x -= 1;
        if (!p[1]) res += 1;
        p[1] = true;
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int a, b;
    cin >> a >> b;
    solv(a);
    solv(b);
    cout << res;
    return 0;
}
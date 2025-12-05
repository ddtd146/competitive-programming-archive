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

const int N = 262144+3;

using namespace std;

int t; 
int m;
struct Node{
    int maxVal;
    int minVal;
    int res;
} ST[4*N];
bool check[4*N];
int p[N];

void bottom_up(int id, int l, int r){
    if (l == r) {
        ST[id].maxVal = p[l];
        ST[id].minVal = p[l];
        ST[id].res = 0;
        check[id] = true;
        return;
    }
    int mid = (l+r)/2;
    bottom_up(id*2, l, mid);
    bottom_up(id*2+1, mid+1, r);
    if (check[id*2] && check[id*2+1] && (ST[id*2].minVal > ST[id*2+1].maxVal || ST[id*2].maxVal < ST[id*2+1].minVal)){
        check[id] = true;
        ST[id].res = ST[id*2].res + ST[id*2+1].res; 
        ST[id].maxVal = max(ST[id*2].maxVal, ST[id*2+1].maxVal);
        ST[id].minVal = min(ST[id*2].minVal, ST[id*2+1].minVal);
        if (ST[id*2].minVal > ST[id*2+1].maxVal) ST[id].res += 1;
    }
    else check[id] = false;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin >> t;
    w(t){
        cin >> m;
        foru(i, 1, 4*m) check[i] = false; 
        foru(i, 1, m) cin >> p[i];
        bottom_up(1, 1, m);
        if (check[1] == true) cout << ST[1].res <<"\n";
        else cout << -1 << "\n";
    }
    return 0;
}
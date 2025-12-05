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

char a[9][9];

char solv(){
    foru(i, 1, 8){
        int r = 0;
        foru(j, 1, 8) 
            if (a[i][j] == 'R') ++r;
        if (r == 8) return 'R';
    }
    foru(i, 1, 8){
        int b = 0;
        foru(j, 1, 8) 
            if (a[j][i] == 'B') ++b;
        if (b == 8) return 'B';
    }
    return 0;
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t;
    cin >> t;
    w(t){
        foru(i, 1, 8) 
            foru(j, 1, 8) 
                cin >> a[i][j];    
        cout << solv() << '\n';
        }
    return 0;
}
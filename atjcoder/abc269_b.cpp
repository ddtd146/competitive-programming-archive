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

const int N = 12;

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    char s[N][N];
    int a, b, c, d;
    foru(i, 1, 10) 
        foru(j, 1, 10) 
            cin >> s[i][j];
    foru(i, 1, 10) 
        foru(j, 1, 10){
            if (s[i][j] == '#' && s[i-1][j] != '#' && s[i][j-1] != '#') {
                a = i;
                c = j;

            }
            if (s[i][j] == '#' && s[i+1][j] != '#' && s[i][j+1] != '#'){
                b = i;
                d = j;
            }
        }    
    cout << a << " " << b << "\n" << c << " " << d;
    return 0;
}
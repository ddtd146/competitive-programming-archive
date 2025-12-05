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

const int N = 107;

using namespace std;

int n, m;
int a[N][N];

bool check(){
    foru(i, 2, n)
        foru(j, 1, i - 1)
            if (a[i][j] == 0) return false;
    return true;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    memset(a, 0, sizeof a);
    cin >> n >> m;
    foru(i, 1, m){
        int k;
        cin >> k;
        int p[k+7] = {0};
        foru(j, 1, k) cin >> p[j];
        foru(j, 2, k) 
            foru(x, 1, j-1) {
                a[p[x]][p[j]] = 1;
                a[p[j]][p[x]] = 1;
            }
    }
    if (check()) cout << "Yes" ;
    else cout << "No";
    return 0;
}
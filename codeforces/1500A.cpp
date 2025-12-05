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

#define N 200000+7
#define M 5000000+7

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int n;
    int a[N];
    cin >> n;
    foru(i, 1, n) cin >> a[i];
    vector<pii> v[M];
    foru(i, 1, n-1){
        foru(j, i+1, n){
            int s = a[i] + a[j];
            for (auto &x : v[s]) {
                if (x.se != i  && x.fi != i && x.fi != j && x.se != j) {
                    cout << "YES" << "\n";
                    cout << i << " " << j << " " << x.fi << " " << x.se;
                    return 0;
                }
            }
            v[s].pb(mp(i,j));
        }
    }
    cout << "NO";
    return 0;
}
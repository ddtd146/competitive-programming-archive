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

#define N 107

using namespace std;
int n, a[N], t;

void solv(){
    cin >> n;
        foru(i, 1, n) cin >> a[i];
        foru(i, 2, n) {
            if (a[i] == 0) a[i] += a[i-1];
            else if (a[i-1] - a[i] < 0) a[i] = a[i-1] + a[i];
            else {
                cout << -1 << '\n';
                return;
            }  
        }
        foru(i, 1, n) cout << a[i] << " ";
        cout << '\n';
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    cin >> t;
    w(t){
        solv();
    }    
    return 0;
}
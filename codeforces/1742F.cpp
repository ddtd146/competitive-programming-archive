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

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int test, q;
    cin >> test;
    w(test){
        cin >> q;
        ll s = 1;
        ll t = 1; 
        int d = 0;
        int dd = 0;
        foru(i, 1, q){
            int typ, k;
            string x; 
            
            cin >> typ >> k >> x;
            if (typ == 2){
                t += k * x.size();
                if (d != 1) forn(i, x.size()) 
                    if (x[i] > 'a') d = 1;    
            }
            if (typ == 1) {
                s += k * x.size();
                if (dd != 1) forn(i, x.size())
                		if (x[i] > 'a') dd = 1;
            }
            if (d == 1) cout << "YES\n";
                else if (dd == 1) cout << "NO\n";
                else if (s >= t) cout << "NO\n";
                	else if (s < t) cout << "YES\n";
        }
    }
    return 0;
}
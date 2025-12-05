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

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t;
    cin >> t;
    w(t){
        int n; char st;
        cin >> n >> st;
        string s;
        cin >> s;
        if (st == 'g') {
            cout << 0 << '\n';
            continue;
        }
        s += s;
        int i = 0;
        int pos = -1;
        int res = 0;
        while(i < n){
            if (s[i] == st) {
                int j = i+1;
                while(j < 2*n){
                    if (s[j] == 'g') {
                        res = max(res, j - i);
                        i = j + 1;
                        break;
                    }
                    else ++j;
                }
            }
            else ++i;
        }
        cout << res << '\n';
    }    
    return 0;
}
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
#define pii pair<int, int>
#define pis pair<int, string>

#define pb push_back
#define mp make_pair
#define all(x) x.begin(), x.end()
#define fi first
#define se second

#define forn(i, n) for (int i = 0; i < n; ++i)
#define foru(i, a, b) for (int i = a; i <= b; ++i)
#define ford(i, a, b) for (int i = a; i >= b; --i)
#define w(t) while (t--)

const int N = 200007;

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int n;
    cin >> n;
    string a, b;
    cin >> a >> b;
    int d = 0;
    int k = 0, kk = 0;
    forn(i, n) 
        if (a[i] == b[i]) ++d;
    if ((n - d) % 2 == 1) {
        cout << -1;
        return 0;
    }
    forn(i, n){
        if (a[i] == b[i]) cout << 0;
        else {
            if (a[i] == '0') {
                if (k < (n-d)/2) {
                    ++k;
                    cout << 0;
                }
                else {
                    cout << 1;
                    ++kk;
                }
            } 
            else {
                if (kk < (n-d)/2) {
                    ++kk;
                    cout << 0;
                }
                else {
                    ++k;
                    cout << 1;
                }
            }
        }
    }
    return 0;
}
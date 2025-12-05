#include <iostream>
#include <vector>
#include <string>
#include <numeric>
#include <algorithm>
#include <map>
#include <set>
#include <queue>
#include <stack>
#include <string>
#include <climits>
#include <cmath>
#include <bitset>
#include <random>

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

void solve() {
    string s;
    cin >> s;
    int n = s.size();
    int res = 0;
    if (n == 1 && s[0] == '*') {
        cout << 1 << '\n';
        return;
    }
    forn(i, n - 1) {
        bool goRight = (s[i] == '>' || s[i] == '*');
        bool goLeft = (s[i+1] == '<' || s[i+1] == '*');
        
        if (goRight && goLeft) {
            cout << -1 << "\n";
            return;
        }
    }

    
    int lenLeft = 0;
    forn(i, n) {
        if (s[i] == '>') {
            break; 
        }
        lenLeft++;
    }

    int lenRight = 0;
    ford(i, n - 1, 0) {
        if (s[i] == '<') {
            break;
        }
        lenRight++; 
    }

    cout << max(lenLeft, lenRight) << '\n';
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t;
    cin >> t;
    w(t) {
        solve();
    }
    return 0;
}
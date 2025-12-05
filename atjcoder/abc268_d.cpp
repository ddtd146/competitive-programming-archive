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

// bool bs(vector<string> a, string val){
//     int l = 0;
//     int r = a.size() - 1;
//     while (l <= r) {
//         int mid = (l + r) / 2;
//         if (a[mid] == val) return true;
//         if (a[mid] < val) l = mid+1;
//         else r = mid - 1;
//     }
//     return false;
// }

void backtrack(int i, vector<string>&s, vector<string>&t, int r, string res){
    if (r < 0) return;
    if (i == s.size()) {
        if (res.size() >= 3 && !binary_search(t.begin(), t.end(), res)) {
            cout << res;
            exit(0);
        }
        return;
    }
    if (res.size() > 0 && res.back() !=  '_') backtrack(i, s, t, r, res + '_');
    else {
        backtrack(i+1, s, t, r, res + s[i]);
        if (res.size() > 0) backtrack(i, s, t, r-1, res + '_');
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int n, m;
    cin >> n >> m;
    vector<string> s(n);
    vector<string> ss(m);
    forn(i, n) cin >> s[i];    
    forn(i, m) cin >> ss[i];
    sort(all(s));
    sort(all(ss));
    int r = 16;
    forn(i, n) r -= s[i].size(); // slots for each word
    r -= (n-1); // '-' between each word
    do {
        backtrack(0, s, ss, r, "");
    } while(next_permutation(s.begin(), s.end()));
    cout << -1;
    return 0;
}
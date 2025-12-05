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

void solve(){
    int n;
    cin >> n;
    vector<int> pr(n+1, 0);
    foru(i, 1, n) {
        cin >> pr[i];
        pr[i] += pr[i-1];
    }
    foru(l, 1, n-2)
        foru(r, l+1, n-1){
            ll s1 = (pr[n] - pr[r]) % 3;
            ll s2 = (pr[r] - pr[l]) % 3;
            ll s3 = (pr[l] - pr[0]) % 3;
            if ((s1 == s2 && s2 == s3) || (s1 != s2 && s2 != s3 && s1 != s3)) {
                cout << l << " " << r << "\n"; 
                return;
            } 
        }
    cout << 0 << " " << 0 << "\n";
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t = 1;
    cin >> t;
    w(t) {
        solve();
    }
    return 0;
}
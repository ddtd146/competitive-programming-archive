#include <algorithm>
#include <iostream>
#include <vector>

#define ll long long
#define forn(i, n) for (int i = 0; i < n; ++i)
#define w(t) while(t--)

using namespace std;

void solve(){
    int n;
    cin >> n;
    vector<int> p(n);
    forn(i, n) cin >> p[i];

    int mn = n + 1;
    
    forn(i, n - 1) { 
        mn = min(mn, p[i]);
        
        if (mn == n - i) {
            cout << "No\n";
            return;
        }
    }
    
    cout << "Yes\n";
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
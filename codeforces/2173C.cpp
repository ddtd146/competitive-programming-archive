#include <algorithm>
#include <iostream>
#include <vector>

#define ll long long
#define vi vector<int>
#define vl vector<ll>
#define pb push_back
#define all(x) x.begin(), x.end()
#define forn(i, n) for (int i = 0; i < n; ++i)
#define w(t) while(t--)

using namespace std;

void solve(){
    int n;
    ll k; 
    cin >> n >> k;
    
    vl a(n); 
    forn(i, n) {
        cin >> a[i];
    }
    
    sort(all(a));
    a.erase(unique(all(a)), a.end());
    n = a.size(); 
    vector<bool> isVisited(n, false);
    vl b;
    forn(i, n) {
        if (isVisited[i]) continue;
        
        ll val = a[i];
        if (k / val > n) {
            cout << -1 << "\n";
            return;
        }
        b.pb(val);
        for (ll multiple = val; multiple <= k; multiple += val) {
            auto it = lower_bound(all(a), multiple);
            if (it == a.end() || *it != multiple) {
                cout << -1 << "\n";
                return;
            }
            int idx = distance(a.begin(), it);
            isVisited[idx] = true;
        }
    }
    
    cout << b.size() << "\n";
    for (int i = 0; i < b.size(); ++i) {
        cout << b[i] << (i == b.size() - 1 ? "" : " ");
    }
    cout << "\n";
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t;
    cin >> t;
    w(t) {
        solve();
    }
    return 0;
}
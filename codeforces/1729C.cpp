#include<bits/stdc++.h>
#define pii pair<int, int>

using namespace std;

string s;
pii a[200000+7];

struct cmp{
    bool operator() (pii x, pii y){
        if ( x.first == y.first) return x.second < y.second;
        return x.first > y.first;
    }
};

void solve(){
    int n = s.size();
    for(int i = 0 ; i < s.size(); ++i) {
        a[i].first = s[i];
        a[i].second = i+1;
    }
    int l, r=n, cost = 0;
    if (s[0] <= s[n-1]) sort(a, a+n);
    else sort(a, a+n, cmp());
    for(int i = 0; i < n; ++i) 
        if (a[i].first == s[0]) {
            l = i;
            break;
        }
    for(int i = 0; i < n; ++i){
        if (a[i].first != s[n-1] && i > r) break; 
        if (i > l) cost += abs(a[i].first - a[i-1].first);
        if (a[i].first == s[n-1]) r = i;
    } 
    cout << cost << " " << r - l + 1 << '\n';
    for (int i = l; i <= r; ++i) cout << a[i].second << " ";
    cout << '\n';
}

int main(){
    int t;
    cin >> t;
    while(t--){
        cin >> s;
        solve();
    }
}
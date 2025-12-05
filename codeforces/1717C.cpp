#include<bits/stdc++.h>
#define pii pair<int, int>
#define mp make_pair 
using namespace std;

int a[200000+7], b[200000+7];

bool check(int n){
    int cnt = 0;
    for (int i = 0 ; i < n; ++i) 
        if (a[i] == b[i]) ++cnt;
    if (cnt == n) return true;
    for (int i = 0 ; i < n; ++i) if (a[i] > b[i]) return false;
    for (int i = 0 ; i < n; ++i) if ((b[i] - b[(i+1)%n]) >= 2 && a[i] != b[i]) return false;
    return true;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        for(int i = 0; i < n; ++i) cin >> a[i];
        for(int i = 0; i < n; ++i) cin >> b[i];
        if (check(n)) cout << "YES" << '\n';
        else cout << "NO" << '\n';
    }
}
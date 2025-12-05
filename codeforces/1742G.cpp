#include<bits/stdc++.h>

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
#define fastio ios::sync_with_stdio(0);cin.tie(0); cout.tie(0);
#define N 14062003

using namespace std;

int main(){
    fastio;
    int t;
    cin >> t;
    w(t){
        int n;
        cin >> n;
        int a[n+2];
        bool mark[n+2] = {false};
        foru(i, 1, n) cin >> a[i];
        int cur = 0;
        foru(i, 1, min(30, n)){
            int pos = 0;
            int res = 0;
            foru(j, 1, n) {
                if (mark[j]) continue;
                if (res < (cur | a[j])) {
                    pos = j;
                    res = cur | a[j];
                }
            } 
            cur = res;
            mark[pos] = true;
            cout << a[pos] << " ";
        }
        foru(i, 1, n) 
        if (!mark[i]) cout << a[i] << " ";
        cout << '\n';
    }
    return 0;
}    
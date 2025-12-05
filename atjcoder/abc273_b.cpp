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
    ll x;
    int k;
    cin >> x >> k;
    ll  t = 1;
    foru(i, 1, k){
        t *= 10;
        ll d = x / t;
        if (x - d*t < (d+1)*t - x) x = d*t;
        else x = (d+1)*t; 
        if (x == 0) break;
    }
    cout << x;
    return 0;
}    
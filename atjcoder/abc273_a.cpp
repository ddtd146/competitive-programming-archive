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
#define N 12

using namespace std;

int main(){
    fastio;
    int n;
    cin >> n;
    ll t = 1;
    foru(i, 2, n){
        t *= i;
    }
    cout << t;
    return 0;

}    
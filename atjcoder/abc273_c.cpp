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
#define N 200007

using namespace std;

int main(){
    fastio;
    int n, k = -1;
    int a[N] = {0};
    cin >> n;
    foru(i, 1, n) 
        cin >> a[i];
    int id = 1;
    sort(a+1, a+1+n, greater<int>());
    foru(i, 2, n+1){
        if (a[i] == a[i-1]) ++id;
        if (a[i] != a[i-1]) {
            ++k;
            cout << id << '\n';
            id = 1; 
        }
    }
    foru(i, k + 1, n - 1) cout << "0\n";
    return 0;

}    
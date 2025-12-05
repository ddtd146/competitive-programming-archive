    #include<iostream>
#include<string>
using namespace std;

int m,n,r,c, test;
bool ok;
 string g[1000+7], pat[1000+7];

bool check(int x, int y){
    for(int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            int ii = i + x; int jj = j + y;
            if (ii >= n || jj >= m) return false;
            if (g[ii][jj] != pat[i][j]) return false;
        }
    }
    return true;
}

int main(){
    cin >> test;
    while (test--){
        cin >> n >> m;
        for (int i = 0; i < n; ++i) cin >> g[i];
        cin >> r >> c;
        for (int i = 0; i < r; ++i) cin >> pat[i];
        for (int i = 0; i < n ; ++i) {
            for (int j = 0; j < m ; ++j) {
                ok = check(i, j);   
                if (ok) break;
            }
            if (ok) break;
        }  
        cout << (ok ? "YES" : "NO") << '\n';
    }
    
}
#include<iostream>

using namespace std;

int main(){
    int t;
    cin >> t;
    int a[100+7][100+7];
    for(int k = 1; k <= t; ++k){
        int m, n;
        cin >> m >> n;
        int c[100+7] = {0};
        int r[100+7] = {0};
        for(int i = 1; i <= m; ++i) 
            for(int j = 1; j <= n; ++j){
                cin >> a[i][j];
                if (a[i][j] == 1) {
                    r[i] = 1;
                    c[j] = 1;
                }
            }
        int cntr = 0, cntc = 0;
        for (int i = 1; i <= m; ++i) 
            if (r[i] == 1) cntr++;
        for (int j = 1; j <= n; ++j)
            if (c[j] == 1) cntc++;
        cout << '#' << k << " " << (m - cntr)*(n - cntc) << '\n'; 
    }
}
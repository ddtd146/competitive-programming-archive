#include<bits/stdc++.h>

using namespace std;

void solve(int m, int s){
    if (s == 0 && m == 1) {
        cout << 0 << " " << 0;
        return;
    }
    if (s == 0) {
        cout << -1 << " " << -1;
        return;
    }
    string num = "";
    for (int i = 0; i < m; ++i){
        if (s > 9) {num = num + '9'; s -= 9;}
        else {num = num + (char)(s+48); s = 0;}
    }
    if (s > 0) {
        cout << -1 << " " << -1;
        return;
    }
    int pos = 0;
    for (int i = m - 1; i >= 0; --i) {
        if (num[i]!='0') {
            pos = i;
            break;
        }
    }
    if (num[m-1] == '0') {
        cout << 1;
        for (int i = m - 2; i >= 0; --i) {
            if (i == pos) cout << (char)(num[i] - 1);
            else cout << num[i];
        }
    }
    else 
        for(int i = m - 1; i >= 0; --i) 
            cout << num[i];
    cout << " " << num;
}

int main(){
    int m, s;
    cin >> m >> s;
    solve(m , s);
}
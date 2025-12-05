#include<bits/stdc++.h>

using namespace std;

int main(){
    int v;
    string s = "";
    cin >> v;
    int x = 1e5;
    int a[10], d[10] = {0}; 
    for (int i = 1; i < 10; ++i) {
        cin >> a[i];
        x = min(x, a[i]);
    }
    int len = v / x;
    if (len == 0) {
        cout << -1; 
        return 0;
    }
    v = v % x;
    for (int i = 9; i >= 1; --i) {
        if (a[i] == x) break;
        if (v >= a[i] - x) {
            d[i] = v / (a[i] - x);
            len -= d[i];
            v = v % (a[i] - x);
        }
    }      
    for (int i = 9; i >= 1; --i) {
        if (a[i] == x) {
            for (int j = 1; j <= len; ++j) s += (i+48);
            break;
        } else 
        if (d[i] > 0) {
            for (int j = 1; j <= d[i]; ++j) s += (i+48);
        }
    }
    cout << s;
    return 0;
}
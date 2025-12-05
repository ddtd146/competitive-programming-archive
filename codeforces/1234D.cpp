#include<bits/stdc++.h>

using namespace std;

int main(){
    string s;
    cin >> s;
    int q;
    cin >> q;
    while(q--){
        int type;
        cin >> type;
        char c; int pos, l, r;
        if (type == 1) {
            cin >> pos >> c;
            s[pos] = c;
        }   
        else {
            cin >> l >> r;
        }
    }
}
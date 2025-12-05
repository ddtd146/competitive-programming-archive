#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int s;
        string ss = "";
        cin >> s;
        if (s < 10) {
            cout << s << '\n';
            continue;
        }
        int i = 9;
        while(s > 0) {
            if (s >= i) {s -= i; ss = (char)(i+48) + ss;}
            else {
                ss = (char)(s+48) + ss;
                s = 0;
            }
            i--;
        }
        cout << ss << '\n';
    }
}
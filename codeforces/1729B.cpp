#include<bits/stdc++.h>

using namespace std;

int main(){
    int q, n;
    string t;
    cin >> q;
    while(q--){
        cin >> n;
        cin >> t;
        string s = "";
        int i = n - 1;
        while(i >= 0){
            if (t[i] == '0') {
                char ch = 'a' + (t[i-1] - '0') + (t[i-2] - '0')*10 - 1;
                s = ch + s;
                i -= 3;
            }
            else {
                char ch = 'a' + (t[i] - '0') - 1 ;
                s = ch + s;
                i--;
            }
        }
        cout << s << '\n';
    }
}
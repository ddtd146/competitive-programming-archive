#include<bits/stdc++.h>

using namespace std;

int main(){
    // string n;
    // cin >> n;
    // int res = 0;
    // for (int i = 0; i < n.size(); ++i){
    //     res += '9' - n[i];
    // }
    // res += n[0] - '0';
    // cout << res;
    int n, res = 0;
    cin >> n;
    while(n >= 10) {
        ++n;
        if (n % 10 != 0) ++res;
        else {n = n/10; ++res;}
    }
    cout << res+9;
    return 0;
}
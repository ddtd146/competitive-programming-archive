#include<bits/stdc++.h>
#define M 4294967295
using namespace std;

int main(){
    int l, n, i = 0;
    int c = 0;
    long long res[100000+7] = {0};
    stack<int> st;
    cin >> l;
    fflush(stdin);
    while(l--){
        string cmd;
        getline(cin, cmd);
        if (cmd == "add") {
            res[i]++;
        }
        if (cmd == "end") {
            res[i-1] += res[i]*st.top();
            st.pop();
            i--;
        }
        if (cmd[0] == 'f') {
            n = 0;
            int t = 1;
            for (int i = cmd.size()-1; i >= 4; i--) {
                n += (cmd[i] - '0') * t;
                t *= 10;
            }
            st.push(n);
            ++i;
            res[i] == 0;
        }
    }
    if (res[0] > M) cout << "OVERFLOW!!!";
    else cout << res[0];
}
#include<bits/stdc++.h>

using namespace std;

string bin(int x){
    string s = "";
    while(x > 0){
        int r = x % 2;
        x /= 2;
        s = (char)(r+48) + s;
    }
    return s;
}

int dec(string s){
    int val = 0;
    int a = 1;
    for (int i = s.size() - 1; i >= 0; --i){
        val += (s[i] - '0')*a;
        a *= 2;
    }
    return val;
}

int main(){
    int t = 0; 
    int n, m;
    cin >> t;
    while(t--){
        cin >> n >> m;
        int t = 0;
        if (m < n) {cout << 0 << '\n'; continue;}
        string sn = bin(n);
        string sm = bin(m+1);
        string s = "";
        while(sn.size() < sm.size()) sn = '0' + sn;
        while(sm.size() < sn.size()) sm = '0' + sm;
        for (int i = 0; i < sn.size(); ++i) 
            if (sn[i] == sm[i] || t == 1) s = s + '0';
            else if (sn[i] == '0' && sm[i] == '1') s = s + '1';
                else { 
                    t = 1;
                    s = s + '0';
                }
        cout << dec(s) << '\n'; 
    }
}
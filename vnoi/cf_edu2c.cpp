#include<bits/stdc++.h>

using namespace std;
    
string s, ss;
int cnt[126] = {0};
int d; 
int x;


int main(){
    cin >> s;
    string ss1 = "";
    string ss2 = "";
    d = 0;
    int x = 0;
    for (int i = 0; i < s.size(); ++i) 
        ++cnt[s[i]];
    for (int i = 61; i <= 122; ++i) {
        if (cnt[i] % 2 != 0) ++d;
    }
    int dd = d/2;
    if (d % 2 != 0) {
        for (int i = 61; i <= 122; ++i) {
            if (cnt[i] % 2 != 0) {
                dd--;
                if (dd == -1) {
                    x = i; break;
                }
            }
        }
    }
    dd = d/2;
    for (int i = 61; i <= 122; ++i) {
        for(int j = 1; j <= cnt[i] / 2; ++j){
            ss1 = ss1 + char(i);
            ss2 = char(i) + ss2;
        }
        if (cnt[i] % 2 != 0 && dd > 0) {
            dd--;
            ss1 = ss1 + char(i);
            ss2 = char(i) + ss2;
        }
    }
    if (d % 2 == 1) ss1 = ss1 + char(x);
    cout << ss1 + ss2;
}
#include<iostream>
#include<string>

using namespace std;

int main(){
    int t;
    cin >> t;
    string s;
    while(t--){
        cin >> s;
        int d = 0;
        for (int i = 0; i < s.size(); ++i){
            if (s[i] == 'N') d++;
        }
        if (d == 1) cout << "NO" <<'\n';
        else cout << "YES" << '\n';
    }
}
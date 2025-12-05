#include<iostream>
#include<string>

using namespace std;

int main(){
    string s;
    cin >> s;
    int a = -1,b = -1,c = -1,d = -1;
    if (s.size() < 4) {cout << "NO";return 0;}
    for(int i = 0; i < s.size() - 3; ++i) 
        if (s[i] == 'A' && s[i+1] =='B') {
            a = i;
            break;
        }
    for(int i = 0; i < s.size() - 3; ++i) 
        if (s[i] == 'B' && s[i+1] =='A') {
            b = i;
            break;
        }
    for(int i = s.size()-2; i >= 2; --i)
        if (s[i] == 'B' && s[i+1] =='A') {
            c=i;
            break;
        }
    for(int i = s.size()-2; i >= 2; --i)
        if (s[i] == 'A' && s[i+1] =='B') {
            d=i;
            break;
        }
    if ((a == -1 && b == -1) || (c == -1 && d == -1) || (a == -1 && d == -1) || (b == -1 && c == -1)) {cout << "NO"; return 0;}
    if (c - a > 1 || d - b > 1) cout << "YES";
    else cout << "NO";
}
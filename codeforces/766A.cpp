#include<iostream>
#include<string>
#include<math.h>

using namespace std;

int main(){
    string s1, s2;
    int d = 0, res = 0;
    cin >> s1 >> s2;
    if(s1.size() < s2.size()) res = s2.size();
    if (s2.size() < s1.size()) res = s1.size();
    if (s2.size() == s1.size()) if (s1!=s2) res = s2.size(); else res = -1;
    cout << res;
}
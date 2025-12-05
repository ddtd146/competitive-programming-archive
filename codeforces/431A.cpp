#include<iostream>
#include<string>

using namespace std;

int main(){
    int a[5] ={0};
    string s;
    for (int i = 1; i <= 4; ++i) cin>>a[i];
    cin >> s;
    int calo = 0;
    for (int i = 0; i < s.size(); ++i) 
        calo += a[s[i]-'0'];
    cout << calo;
}
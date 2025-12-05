#include<iostream>
#include<string>

using namespace std;

int main(){
    int test, odd;
    string s;
    cin >> test;
    while(test --){
        odd = 0;
        cin >> s;
        for(int i = 0; i<s.size(); ++i) odd += (s[i] - '0') %2 ;
        if (odd == n) {cout << n; continue;}
        
    }
}
#include<iostream>
#include<string>

using namespace std;

int main(){
    int n, k;
    string s;
    cin >> n >> k;
    while(s.size() < n){
        for (int i = 0 ; i < k; ++i) if (s.size() < n) {s += (char) i+97;}
    }
    cout << s;
}
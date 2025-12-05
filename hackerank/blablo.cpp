#include<iostream>

using namespace std;

int main(){
    int a, b, ra = 0;
    cin >> a;
    while(a > 0) {
        ra = ra*10 + a%10;
        a = a / 10;
    }
    cout << ra;
}
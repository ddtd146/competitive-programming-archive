#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    if (n < 5)
    switch(n) {
        case 1: cout << 3; break;
        case 2: cout << 5; break;
        case 3: cout << 7; break;
        case 4: cout << 8; break;
    }
    else {
        n -= 4;
        int r = n % 6;
        n /= 6;
        switch(r){
            case 1: cout << 8*(n+1) + 1; break;
            case 2: cout << 8*(n+1) + 3; break;
            case 3: cout << 8*(n+1) + 4; break;
            case 4: cout << 8*(n+1) + 5; break;
            case 5: cout << 8*(n+1) + 7; break;
            case 0: cout << 8*(n+1); break;
        }
    }
}
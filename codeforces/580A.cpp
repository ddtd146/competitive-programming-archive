#include<iostream>

using namespace std;

const int MAX = 1e5 + 7;

int main(){
    int n, a, b;  
    cin >> n;
    int res = 1, len = 1;
    cin >> b;
    for (int i = 1; i < n; ++i) {
        cin >> a; 
        if (a >= b) len++;
        else {
            if (res < len) res = len;
            len = 1;
        }
        b = a;
    }
    if (res < len) res = len;
    cout << res;
}
#include<iostream>



using namespace std;

int main(){
    long long t, x = 3;
    cin >> t;
    while (t > x) {
        t -= x;
        x = x *2; 
    }
    cout << x - t + 1;
}
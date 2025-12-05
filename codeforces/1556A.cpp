#include<iostream>
#include<stdlib.h>

using namespace std;

int process(int x, int y){
    if ((x-y) % 2!=0) return -1;
    if (x==y && y==0) return 0;
    if (x == y) return 1;
    if (x+y == 0) return 1;
    return 2;
}

int main(){
    int test, c, d;
    int a = 0, b = 0;
    cin >> test;
    while(test--){
        cin >> c >> d;
        cout << process(c, d) << '\n'; 
    }
}
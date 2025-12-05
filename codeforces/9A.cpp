#include<iostream>
#include<math.h>

using namespace std;

int main(){
    int a, b;
    cin >> a >> b;
    a = max(a,b);
    b = 7 - a;
    if (b == 1) cout << "1/6";
    if (b == 2) cout << "1/3";
    if (b == 3) cout <<  "1/2";
    if (b == 4) cout << "2/3" ;
    if (b == 5) cout << "5/6";
    if (b == 6) cout << "1/1";
}
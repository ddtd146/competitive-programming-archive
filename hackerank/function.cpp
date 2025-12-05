#include<iostream>

using namespace std;

int maximum(int a, int b, int c, int d){
    int t = a;
    if (t < b) {t = b;}
    if (t < c) {t = c;}
    if (t < d) {t = d;}
    return t;
}

int main(){
    int x,y,z,t;
    cin >> x >> y >> z >> t;
    cout << maximum(x,y,z,t);
    return 0;
}
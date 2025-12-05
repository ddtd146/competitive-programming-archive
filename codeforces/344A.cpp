#include<iostream>

using namespace std;

int main(){
    int n, a, b, group = 0;
    cin >> n;
    cin >> b;
    for (int i = 1; i < n; i++){
        cin >> a;
        if (a != b) group++;
        b = a;
    }
    cout << group + 1;
}
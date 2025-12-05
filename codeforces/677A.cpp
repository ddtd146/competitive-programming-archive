#include<iostream>

using namespace std;

int main(){
    int n, k, x;
    int width = 0;
    cin >> n >> k;
    for (int i = 0; i < n; ++i) {
        cin >> x;
        if (x>k) width += 2;
        else width ++;
    }
    cout << width;
}
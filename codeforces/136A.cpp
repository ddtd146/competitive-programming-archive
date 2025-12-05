#include<iostream>

using namespace std;

int main(){
    int n, x;
    int p[100+7];
    cin >> n;
    for (int i = 1; i <= n; ++i) {
        cin >> x; 
        p[x] = i;
    }
    for (int i = 1; i <=n; ++i) cout << p[i] << " ";
}
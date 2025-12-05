#include<iostream>
#include<cmath>

using namespace std;

int main(){
    int n, x, k;
    int module[100+7] = {0};
    cin >> n >> k;
    for (int i = 1; i <= n; i++) {
        cin >> x;
        module[x%k] ++;
    }
    if (k %2 == 0) x = k /2 - 1;
    else x = k /2;
    if (module[0] != 0) n = 1;
    else n = 0;
    for (int i = 1; i <= x; i++) 
        n += max(module[i], module[k-i]);
    if (k %2 == 0) n++;
    cout << n; 
}
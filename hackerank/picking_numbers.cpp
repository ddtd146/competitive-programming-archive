#include<iostream>
#include<cmath>

using namespace std;

int main(){
    int n, x, ans = 0;
    int D[100+7] = {0};
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> x;
        D[x] ++;
    }
    for (int i = 1; i < 99; i++){
        ans = max(ans, D[i] + D[i+1]); 
    }
    cout << ans;
}
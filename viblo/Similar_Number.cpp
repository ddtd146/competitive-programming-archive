#include<bits/stdc++.h>

using namespace std;

int solve(int n, int m){
    int cnt = 0;
    if (m % n != 0) return -1;
    n = m / n;
    for (int i = 2; i <= 3; ++i){
        while(n % i == 0) {
            cnt ++; 
            n = n / i;
        }
    }
    if (n != 1) return -1;
    return cnt;
}

int main(){
    int n, m;
    cin >> n >> m;
    cout << solve(n, m);
}
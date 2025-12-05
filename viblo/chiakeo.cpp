#include<iostream>

using namespace std;

long long ab(long long x){
    if (x < 0) return -x;
    return x;
}

int main(){
    int n;
    long long a[200000 + 7] = {0};
    cin >> n;
    for (int i = 1; i <= n; ++i) {
        cin >> a[i];
        a[i] += a[i-1];
    }
    long long res = a[n];
    for (int i = 1; i < n; ++i) 
        res = min(res, ab(2*a[i] - a[n]));
    cout << res;
}
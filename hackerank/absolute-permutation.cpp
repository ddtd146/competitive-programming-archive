#include<iostream>

using namespace std;

bool check(int n, int k){
    if (n % k != 0)  return false;
    if (n / k %2 == 0) return true;
    return false;
}

void out(int n, int k) {
    int a;
    for (int i = 1; i <= n/k/2; ++i) {
        a = i*2*k;
        for (int j = a - 2*k + 1; j <= a - k; ++j) cout << j+k << " ";
        for (int j = a - k + 1; j <= a; ++j) cout << j - k << " "; 
    }
}

int main(){
    int n, k, test;
    cin >> test;
    while (test--){
        cin >> n >> k;
        if (k == 0) {for (int i = 1; i <= n; i++) cout << i << " "; cout << '\n'; continue;}
        if (check(n, k)) out(n, k);
        else cout << -1;
        cout << '\n';
    }
}
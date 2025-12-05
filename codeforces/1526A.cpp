#include<bits/stdc++.h>
#define N 50+7
using namespace std; 

int main(){
    int n, a[N];
    int t; 
    cin >> t;
    while(t--){
        cin >> n;
        for (int i = 1; i <= 2*n; ++i) cin >> a[i];
        sort(a+1, a+1+2*n);
        for(int i = 1; i <= n; ++i) {
            cout << a[i] << " " << a[2*n + 1 - i] << " ";
        }
        cout << '\n';
    }
}
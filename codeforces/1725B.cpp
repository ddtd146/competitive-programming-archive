#include<bits/stdc++.h>

using namespace std;

int main(){
    int n, d;
    cin >> n >> d;
    int p[100000+7];
    for(int i = 0 ; i < n; ++i) cin >> p[i];
    sort(p, p+n, greater<int>());
    int wins = 0;
    int i = 0;
    while(n > 0 && n >= (d / p[i]) + 1){
            n = n - d/p[i]  - 1; 
            ++i;
    }
    cout << i;
}
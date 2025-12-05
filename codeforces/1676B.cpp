#include<bits/stdc++.h>

using namespace std;

int main(){
    int t, n;
    cin >> t;
    while(t--){
        int sum = 0;
        int minn = INT_MAX;
        cin >> n;
        for (int i = 0; i < n; ++i) {
            int x; cin >> x;
            sum += x;
            minn = min(minn, x);
        }
        cout << sum - minn*n << '\n';
    }
}
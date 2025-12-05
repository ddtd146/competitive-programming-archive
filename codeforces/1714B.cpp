#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    int a[200000+7] = {0};
    while(t--){
        int n;
        cin >> n;
        set<int> s;
        for (int i = 1; i <= n; ++i) cin >> a[i];
        a[0] = a[1];
        for (int i = n; i >= 0; --i) 
            if (s.count(a[i])) {
                cout << i << '\n';
                break;
            }
            else s.insert(a[i]);
    }
}
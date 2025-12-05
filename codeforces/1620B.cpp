#include<bits/stdc++.h>

using namespace std;

int main(){
    long long a,b,c,d,e,f,g,h,k; 
    int t;
    cin >> t;
    long long s1,s2;
    int x[200000+7];
    while(t--){
        int width, height;
        s1 = s2 = 0;
        cin >> width >> height;
        cin >> k;
        for (int i = 1; i <= k; ++i) cin >> x[i];
        a = x[1]; b = x[k];
        cin >> k;
        for (int i = 1; i <= k; ++i) cin >> x[i];
        c = x[1]; d = x[k];
        cin >> k;
        for (int i = 1; i <= k; ++i) cin >> x[i];
        e = x[1]; f = x[k];
        cin >> k;
        for (int i = 1; i <= k; ++i) cin >> x[i];
        g = x[1]; h = x[k];
        s1 = max(b-a, d-c) *height;
        s2 = max(f-e, h-g) * width;
        cout << max(s1, s2) << '\n';
    }
}
#include<bits/stdc++.h>

using namespace std;

int main(){
    int n, t;
    cin >> t;
    string s;
    int prefSum[100000+7];
    while(t--){
        cin >> n >> s;
        long long cnt = 1,res = 0;
        prefSum[0] = 0;
        for (int i = 1; i <= n; ++i)    
            prefSum[i] = prefSum[i-1] + (s[i-1] - '0');
        for (int i = 1; i <= n; ++i) 
            prefSum[i] -= i;
        sort(prefSum, prefSum + 1 + n);
        for(int i = 1; i <= n; ++i) {
            if (prefSum[i] == prefSum[i-1]) ++cnt;
            if (prefSum[i] != prefSum[i-1] || i == n){
                res += cnt*(cnt-1)/2;
                cnt = 1;
            }
        }
        cout << res << '\n';
    }
}
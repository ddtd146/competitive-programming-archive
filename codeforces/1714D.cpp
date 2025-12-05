#include<bits/stdc++.h>
using namespace std;
bool check (string s, string ss, int pos){
    int i = (int)s.size() - 1;
    while(i >= 0) {
        if (ss[pos] != s[i]) return false;
        i--; pos--;     
    }
    return true;
}
int main(){
    int q;
    cin >> q;
    // while(q--){
    //     int n; 
    //     string text, s[100+7];
    //     cin >> text >> n;
    //     int dp[100+7];
    //     memset(dp, INT_MAX, sizeof(dp));
    //     dp[0] = 0;
    //     int m = 10;
    //     for(int i = 1; i <= n; ++i) {
    //         cin >> s[i];
    //         m = min(m, (int)(s[i].size()));
    //     }
    //     for (int i = m-1; i < (int)text.size(); ++i){
    //         for(int j = 1; j <= n; ++j)
    //             if (check(s[j], text, i)) {
    //                 for(int k = 1; k <= (int)s[j].size(); ++k)
    //                     dp[i+1] = min(dp[i+1-k], dp[i+1]);
    //             }
    //         dp[i] ++;
    //     }
    //     if (dp[text.size()] == INT_MAX) cout << -1 << '\n';
    //     else cout << dp[text.size()];
    // }
}
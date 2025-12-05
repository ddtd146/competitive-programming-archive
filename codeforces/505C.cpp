// #include<bits/stdc++.h>

// using namespace std;

// void solve(string s){
//     for (int i = 0; i < s.size(); ++i) 
//         if ((s[i] - '0') % 8 == 0) {
//             cout << "YES\n" << s[i];
//             return;
//         }
//     for (int i = 0 ; i < s.size()-1; ++i) 
//         for (int j = i+1; j < s.size(); ++j)
//             if (((s[i] - '0')*10 + (s[j] - '0')) % 8 == 0) {
//                 cout << "YES\n" << s[i] << s[j];
//                 return;
//             }
//     for (int i = 0 ; i < s.size()-2;++i)
//         for (int j = i+1; j < s.size()-1; ++j)
//             for(int k = j+1; k < s.size(); ++k)
//                 if (((s[i] - '0')*100+(s[j] - '0')*10+(s[k]- '0')) % 8 == 0){
//                     cout << "YES\n" << s[i] << s[j] << s[k];
//                     return;
//                 }
//     cout << "NO";
// }

// int main(){
//     string num;
//     cin >> num;
//     solve(num);
// }

#include<bits/stdc++.h>

using namespace std;

int main(){
    string s, res = "";
    cin >> s;
    bool dp[100+7][8+7];
    int prev[100+7][8+7];
    memset(dp, false, sizeof(dp));
    memset(prev, -1, sizeof(prev));
    for (int i = 0; i < s.size(); ++i) 
        dp[i][(s[i] - '0') % 8] = true;

    for (int i = 1; i < s.size(); ++i) 
        for (int j = 0; j < 8; ++j) {
            if (dp[i-1][j]) {
                dp[i][j] = true;
                prev[i][j] = j;

                dp[i][(j*10 + (s[i] - '0')) % 8] = true;
                prev[i][(j*10 + (s[i] - '0')) % 8] = j;
            }
        }
    for (int i = 0; i < s.size(); ++i){
        if (dp[i][0]) {
            cout << "YES" << '\n';
            int x = i, y = 0;
            while(1){
                if (prev[x][y] == -1 || prev[x][y] != y) res += s[x];
                if (prev[x][y] == -1) break;
                y = prev[x][y];
                x--;
            }
            for(int j = res.size() - 1; j>= 0; --j) cout << res[j];
            return 0;
        }
    }
    cout << "NO";
}
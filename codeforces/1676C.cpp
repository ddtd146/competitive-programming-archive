#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    string words[57];
    cin >> t;
    while(t--){
        int n, m;
        cin >> n >> m;
        int res = INT_MAX;
        for (int i = 1; i <= n; ++i) cin >> words[i];
        for (int i = 2; i <= n; ++i) {
            for(int j = 1; j < i; ++j) {
                int moves = 0;
                for(int k = 0; k < m; ++k) {
                    moves += abs(words[i][k] - words[j][k]);
                }
                res = min(res, moves);
            }
        }
        cout << res << '\n';
    }
}
// Method 1: Dp
// #include<bits/stdc++.h>
// #define N 2007
// using namespace std;

// int main(){
//     int n;
//     int a[N];
//     long long dp[N][N];
//     memset(dp, -1, sizeof(dp));
//     cin >> n;
//     for (int i = 1; i <= n; ++i) cin >> a[i];
//     for (int i = 0; i <= n; i++) dp[i][0] = 0;
//     for (int i = 1; i <= n; ++i) 
//         for (int j = 1; j <= i; ++j)
//         if (dp[i-1][j-1] + a[i] >= 0 && dp[i-1][j-1] >= 0) dp[i][j] = max(dp[i-1][j-1] + a[i], dp[i-1][j]);
//         else dp[i][j] = dp[i-1][j];
//     for (int i = n; i >= 0; --i) 
//         if (dp[n][i] >= 0) {
//             cout << i;
//             return 0;
//         }
// }

// Method 2: pirority_queue
#include<bits/stdc++.h>
#define N 200007
using namespace std;

int main(){
    int n, a[N];
    cin >> n;
    for (int i = 1; i <= n; ++i) cin >> a[i];
    priority_queue<int, vector<int>, greater<int>> pq;
    long long hp = 0;
    for (int i = 1; i <= n; ++i) {
        if (hp + a[i] >= 0) {
            hp += a[i];
            pq.push(a[i]);
        } else {
            hp+=a[i];
            pq.push(a[i]);
            hp -= pq.top();
            pq.pop();
        }
    }
    cout << pq.size();
}
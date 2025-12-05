#include <algorithm>
#include <array>
#include <bitset> 
#include <climits>
#include <cstdint>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <iostream>
#include <list>
#include <map>
#include <queue>
#include <random>
#include <set>
#include <stack>
#include <string>
#include <utility>
#include <unordered_set>
#include <unordered_map>
#include <vector>

#define ll long long
#define uint unsigned int
#define pii pair <int , int>
#define pis pair <int, string>

#define pb push_back
#define mp make_pair
#define all(x) x.begin(), x.end()
#define fi first
#define se second

#define forn(i, n) for (int i = 0; i < n; ++i)
#define foru(i, a, b) for (int i = a; i <= b; ++i) 
#define ford(i, a, b) for (int i = a; i >= b; --i)
#define w(t) while(t--)

#define N 100000+7

using namespace std;

int add(int x, int y){
    if (x == INT_MAX) return INT_MAX;
    if ((x + y) < x) return x;
    return x+y;
    
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int n;
    int dp[N][3];
    cin >> n;
    // int x;
    // cin >> x;
    // if (x % 2 == 0) {
    //     dp[1][1] = INT_MAX;
    //     dp[1][0] = max(x, 0);
    // }else{
    //     dp[1][1] = x;
    //     dp[1][0] = INT_MAX;
    // }
    // foru(i, 2, n){
    //     int x;
    //     cin >> x; 
    //         if (x % 2 == 0) {
    //             dp[i][0] = add(dp[i-1][0], x);
    //             dp[i][1] = add(dp[i-1][1], x);
    //         }
    //         else {
    //             dp[i][0] = add(dp[i-1][1], x);
    //             dp[i][1] = add(dp[i-1][0], x);
    //             if (dp[i][0] == INT_MAX || dp[i][0] < dp[i-1][0]) dp[i][0] = dp[i-1][0];
    //             if (dp[i][1] == INT_MAX || dp[i][1] < dp[i-1][1]) dp[i][1] = dp[i-1][1];
    //         }
    // }
    // // if (dp[n][1] == INT_MAX) dp[n][1] = -1;
    // // cout << dp[n][1]; 
    // foru(j, 0, 1) {
    //     foru(i, 1, n) cout << dp[i][j] << " ";
    //     cout << '\n';
    // }
    // return 0;
    int oddSum = 0;
    int evenSum = 0;
    int maxOdd = INT_MIN; // less than 0
    int minOdd = INT_MAX; // greater than 0
    int cntOdd = 0;
    foru(i, 1, n){
        int x;
        cin >> x;
        if (x%2 == 0){
            if (x > 0) evenSum += x;
        }
        else {
            if (x > 0) {
                oddSum += x;
                cntOdd ++;
                minOdd = min(minOdd, x);
            } else{
                maxOdd = max(maxOdd, x);
            }
        }
    }
    if (cntOdd == 0 && maxOdd == INT_MIN) cout << -1;
    else if (cntOdd % 2 != 0){
        cout << oddSum + evenSum;
    }
    else {
        if (maxOdd == INT_MIN) maxOdd = -INT_MAX; 
        cout << oddSum - min(minOdd, -maxOdd) + evenSum;
    }
}
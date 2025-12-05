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

const int N = 14062003;

using namespace std;

// bool check(int t, int r, int k, int a[]){
//     priority_queue<int> pq;
//     int i = 1;
//     while(t>0){
//         if (!pq.empty())
//         if (pq.top() == t){
//             pq.pop();
//             t--;
//             r++;
//         }
//         if (i <= k && a[i] < t) {
//             if (r == 0) return false;
//             pq.push(a[i]);
//             r--;
//             ++i;
//         }
//         if (!pq.empty())
//         if (pq.top() == t){
//             pq.pop();
//             t--;
//             r++;
//         }
//         if (i <= k && a[i] == t){
//             if (r == 0) return false;
//             t--; 
//             i++;
//         }  
//     }
//     return true;
// }

bool check(int k, int n, int m, int a[]){
    bool d[k+7] = {false};
    int t = k;
    int r = n * m - 2;
    foru(i, 1, k) {
        if (d[t]) {
            t--;
            r++;
        }
        d[a[i]] = true;
        if (a[i] < t ) {
            if (r >= 1) --r;
            else return false;
        } else{
            if (r > 1) t--;
            else return false;
        }
    }
    return true;
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t;
    cin >> t;
    w(t){
        int n, m, k;
        cin >> n >> m >> k;
        int a[k+7];
        foru(i, 1, k) cin >> a[i];
        if (check(k, n, m, a)) cout << "ya\n";
        else cout << "tidak\n"; 
     }    
    return 0;
}
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

#define N 100+7

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t, n, k;
    int a[N];
    cin >> t;
    w(t){
        long long sum = 0;
        cin >> n >> k;
        forn(i, n) a[i] = 0;
        forn(i, n) {
            int x;
            cin >> x;
            if (a[i%k] < x) {
                sum -= a[i%k];
                a[i%k] = x;
                sum += a[i%k];
            }
        }
        cout << sum << '\n'; 
    }
    return 0;
}
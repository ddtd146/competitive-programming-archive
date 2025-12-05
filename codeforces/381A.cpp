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

void solve(){
    int n;
    cin >> n;
    vector<int> a(n);
    forn(i, n) cin >> a[i];

    int left = 0;
    int right = n-1;
    int score[2] = {0};
    int player = 0;
    while(left <= right) {
        if (a[left] > a[right]) {
            score[player] += a[left];
            left++;
            player = (player + 1) % 2;
        } else {
            score[player] += a[right];
            right--;
            player = (player + 1) % 2;
        }
    }
    for (auto x : score) cout << x << " ";
    cout << '\n';
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t;
    t = 1;
    w(t) {
        solve();
    }
    return 0;
}
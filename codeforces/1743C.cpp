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

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t;
    cin >> t;
    w(t){
        int n;
        cin >> n;
        int a[n+2];
        string s;
        cin >> s;
        int sum = 0;
        forn(i, n) {
            cin >> a[i];
            sum += a[i] * (int) (s[i] - '0');
        }
        int i = 0;
        while(i < n){
            if (s[i] == '0' && s[i+1] == '1') {
                int j = i + 1;
                int tmp = INT_MAX;
                while(j < n && s[j] == '1') {
                    tmp = min(tmp, a[j]);
                    ++j;
                }
                if (a[i] > tmp) sum = sum - tmp + a[i];
                i = j;
            } else ++i;
        }
        cout << sum << '\n';
    }
    return 0;
}
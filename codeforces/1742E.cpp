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

int search(int k, int a[], int n){
    int l = 1; 
    int r = n;
    int mid;
    while (l <= r) {
        mid = (l+r)/2;
        if (a[mid] < k) {
            if (a[mid+1] > k || mid + 1 > n) return mid;
            else l = mid + 1;
        }
        else if (a[mid] > k) r = mid - 1;
        else if (a[mid] == k) {
            if (a[mid+1] != k) return mid;
            else l = mid + 1;
        }
    }
    return -1;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t;
    cin >> t;
    // int sum = 0;
    w(t){
        int n, q;
        cin >> n >> q;
        int a[n+3] = {0};
        ll s[n+3] = {0};
        foru(i, 1, n){
            cin >> a[i];
            s[i] = s[i-1] + a[i];
            a[i] = max(a[i-1], a[i]);
        }
        w(q){
            int k; cin >> k;
            int pos = search(k, a, n);
            if (pos == -1) cout << "0 ";
            else cout << s[pos] << " ";
        }
        cout << '\n';
    }    
    return 0;
}
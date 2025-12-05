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

const int N = 1000000 + 7;

using namespace std;

void sieve(vector<int> &spf){
    spf[0] = 0;
    foru(i, 2, N){
        if (spf[i] == 1) {
            for (int j = i; j <= N; j += i){
                if (spf[j] == 1) spf[j] = i;
            }
        }
    }
}

void primeFactorize(const vector<int> &spf, map<int, int> &cntPrime, int x){
    while(x > 1){
        ++ cntPrime[spf[x]];
        x /= spf[x];
    }
}

void solve(const vector<int> &spf){
    int n;
    cin >> n;
    map<int, int> cntPrime;
    forn(i, n){
        int x;
        cin >> x;
        primeFactorize(spf, cntPrime, x);
    }
    for(auto const& [prime, cnt] : cntPrime){
        if (cnt % n != 0) {
            cout << "NO\n";
            return;
        }
    } 
    cout << "YES\n";
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t = 1;
    cin >> t;
    vector<int> spf(N, 1);
    sieve(spf);
    w(t) {
        solve(spf);
    }
    return 0;
}
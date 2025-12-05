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

const int N = 2e5+7; 

using namespace std;

vector<int> spf(N);

void buildSieve() {
    foru(i, 0, N - 1) spf[i] = i; 

    for (int i = 2; i * i < N; ++i) {
        if (spf[i] == i) { 
            for (int j = i * i; j < N; j += i) {
                if (spf[j] == j) { 
                    spf[j] = i;
                }
            }
        }
    }
}

set<int> getPrimeFactors(int k) {
    set<int> factors;
    while (k > 1) {
        factors.insert(spf[k]);
        k /= spf[k];
    }
    return factors;
}

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    vector<int> b(n);
    forn(i, n) cin >> a[i];
    forn(i, n) cin >> b[i];
    map<int, int> seenPrimes; 
    bool cost0 = false;
    forn(i, n) {
        set<int> factors = getPrimeFactors(a[i]);
        for (int p : factors) {
            if (seenPrimes.count(p)) {
                cost0 = true;
                break;
            }
        }
        if (cost0) break;
        
        for (int p : factors) {
            seenPrimes[p]++; 
        }
    }

    if (cost0) {
        cout << 0 << '\n';
        return;
    }

    bool cost1 = false;
    forn(i, n) {
        set<int> factors = getPrimeFactors(a[i] + 1);
        for (int p : factors) {
            if (seenPrimes.count(p)) {
                cost1 = true;
                break;
            }
        }
        if (cost1) break;
    }

    if (cost1) {
        cout << 1 << '\n';
        return;
    }

    cout << 2 << '\n';
}

int main(){

    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    buildSieve();

    int t;
    cin >> t;
    w(t){
        solve();
    }	
    return 0;
}
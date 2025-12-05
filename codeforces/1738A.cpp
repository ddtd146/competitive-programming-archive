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

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int n, t;
    int typ[N];
    cin >> t;
    w(t){
        cin >> n;
        ll res = 0;
        vector<int> frost, fire;
        foru(i, 1, n) cin >> typ[i];
        foru(i, 1, n) {
            int x; cin >> x;
            if (typ[i] == 0) fire.pb(x);
            else frost.pb(x);
        }
        sort(fire.begin(), fire.end(), greater<int>());
        sort(frost.begin(), frost.end(), greater<int>());
        if (frost.size() != 0) {
            if (fire.size() == 0) frost.swap(fire);
            else if (fire[0] < frost[0]) frost.swap(fire);
        }

        forn(i, max(fire.size(), frost.size())){
            if (i >= frost.size()) res += fire[i];
            else if (i >= fire.size()) res += frost[i];
            else if (i == fire.size()-1) res += fire[i]*2 + frost[i];
            else res += fire[i]*2 + frost[i]*2; 
        }
        cout << res << '\n';
    }
    
    return 0;
}
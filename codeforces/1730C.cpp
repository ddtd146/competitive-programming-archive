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

#define N 23012003

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t;
    string s;
    cin >> t;
    w(t){
        cin >> s;
        priority_queue<int, vector<int>, greater<int>> pq;
        ford(i, s.size()-1, 0){
            int val = s[i] - '0';
            if (pq.empty()) pq.push(val);
            else if (val <= pq.top()) pq.push(val);
            else pq.push(min(val+1, 9));
        }
        while(!pq.empty()) {
            cout << pq.top();
            pq.pop();
        }
        cout << '\n';
    }   
    return 0;
}
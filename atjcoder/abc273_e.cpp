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

struct Node {
    int val;
    int par;
    Node(int x, int y) {
        val = x; 
        par = y;
    }
};

vector<Node> vec;
map<int, int> m;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int q;
    int v = 0;
    vec.pb(Node(-1, 0));
    cin >> q;
    w(q){
        string s; int x;
        cin >> s;
        if (s == "ADD"){
            cin >> x;
            vec.pb(Node(x, v));
            v = vec.size() - 1;
        }
        if (s == "DELETE"){
            v = vec[v].par;
        }
        if (s == "SAVE"){
            cin >> x;
            m[x] = v;
        }
        if (s == "LOAD"){
            cin >> x;
            v = m[x];
        }
        cout << vec[v].val << '\n';
    }
    return 0;
}
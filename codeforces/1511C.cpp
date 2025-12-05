#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>
#include <iterator>

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

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n, q;
    cin >> n >> q;

    vector<int> a(n);
    forn(i, n) {
        cin >> a[i];
    }

    w(q) {
        int x;
        cin >> x;

        auto it = find(all(a), x);

        int p = distance(a.begin(), it);

        cout << p + 1 << " ";

        rotate(a.begin(), a.begin() + p, a.begin() + p + 1);
    }
    cout << '\n';

    return 0;
}
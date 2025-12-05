#include<bits/stdc++.h>
#define w(t) while(t--)
#define N 100000+7
#define foru(i, a, b) for(int i = a; i <= b; ++i) 
#define pii pair<int, int>

using namespace std;

struct cmp {
    bool operator() (pii a, pii b){
        return (a.second - a.first > b.second - b.first);
    }
};

int main(){
    int t;
    pii x[N];
    cin >> t;
    w(t){
        int n;
        cin >> n;
        foru(i, 1, n) cin >> x[i].first;
        foru(i, 1, n) cin >> x[i].second;
        sort(x+1, x+1+n, cmp());
        int i = 1; int j = n;
        int res = 0;
        while(i < j) {
            if (x[i].first + x[j].first <= x[i].second + x[j].second) {
                ++res;
                i++;
                j--;
            }
            else j--;
        }
        cout << res << '\n';
    }    
}
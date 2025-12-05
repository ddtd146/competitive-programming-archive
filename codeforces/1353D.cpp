
//https://codeforces.com/problemset/problem/1353/D
//

#include<bits/stdc++.h>

using namespace std;

struct Range{
    int left;
    int right;
    int distance;
};

struct cmp{
    bool operator() (struct Range a, struct Range b) {
        if (a.distance == b.distance) return a.left < b.left;
        return (a.distance > b.distance);
    }
};

priority_queue<struct Range, vector<struct Range>, cmp> pq;

void split(int l, int r) {
    if (l > r) return;
    pq.push({l , r, r - l + 1});
    int mid = (l+r) / 2;
    split(l, mid - 1);
    split(mid+1, r);
}
int main(){
    int t, n;
    int a[2*100000+7];
    cin >> t;
    while(t--){
        cin >> n;
        split(1, n);
        for(int i = n; i >= 1; --i) {
            //cout << pq.top().left << " " << pq.top().right;
            int pos = (pq.top().left + pq.top().right) / 2;
            a[pos] = i;
            pq.pop();
        }
        for (int i = 1; i <= n; ++i) cout << a[i] << ' ';
        cout << '\n';
    }
}
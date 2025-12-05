#include<bits/stdc++.h>
#define pii pair<int, int> 
#define mp make_pair
using namespace std;

struct cmp{
    bool operator() (pii a, pii b) {
        if (a.first == b.first) return a.second > b.second;
        else return a.first > b.first;
    }
};

int main(){
    int n, k;
    cin >> n >> k;
    pii s[3*100000+7];
    for(int i = 0; i < n; ++i) cin >> s[i].first >> s[i].second;
    sort(s, s+n, cmp());
    priority_queue<pii, vector<pii>, greater<pii>> pq;
    int cnt = 0;
    int sum = 0, pls = 0;
    for (int i = 0; i < n; ++i){
        if (cnt < k) {
            pq.push(mp(s[i].second, i));
            sum += s[i].first;
            pls = max(sum * pq.top().first, pls);
        }
        else{
            while (pq.top().first < s[i].second) {
                
            }
        }
}
#include<bits/stdc++.h>

using namespace std;

int main(){
    int n, k;
    pair<int, int> cost[10000+7];
    pair<int, string> res[11];
    string s;
    cin >> n >> k;
    cin >> s;
    for(int j = 0 ; j < 10; ++j){
        for(int i = 0 ; i < s.size(); ++i) {
            cost[i].first = abs((int)s[i] - 48 - j); 
            cost[i].second = s[i];
            
        }
        sort(cost, cost+n);
        res[j].first = 0;
        res[j].second = "";
        for(int i = 0; i < s.size(); ++i) {
            if (i < k) res[j].first += cost[i].first;
        }   
    }
    sort(res, res+10);
    cout << res[0].first;
}
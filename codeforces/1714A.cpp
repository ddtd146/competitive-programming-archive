#include<iostream>
#include<algorithm>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, hh, mm;
        cin >> n >> hh >> mm;
        pair<int, int> time[n+7];
        for (int i = 1; i <= n; ++i)
            cin >> time[i].first >> time[i].second;
        sort(time+1, time+1+n);
        if (time[n].first < hh || (time[n].first == hh && time[n].second < mm)) {
            time[1].first += 24;
        }
        for (int i = 1; i <= n; ++i) 
            if (time[i].first > hh || (time[i].first == hh && time[i].second >= mm)) {
                if (time[i].second < mm) {
                    time[i].second += 60;
                    time[i].first -= 1;
                }
                cout << time[i].first - hh << " " << time[i].second - mm << '\n';
                break;
            }
    }
}
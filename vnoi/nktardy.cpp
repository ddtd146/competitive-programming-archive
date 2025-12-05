#include<iostream>
#include<queue>
#include<algorithm>
#include<cstring>
#include<vector>
#include <utility>

using namespace std;

struct Job{
    int index;
    int dl;
    int time;
};

struct Job jobs[100000+7];
int n;
bool mark[100000+7];
int t = 0;

bool cmp (Job a, Job b){
    return a.dl < b.dl;
}

int main(){
    cin >> n;
    for (int i = 1; i <= n; ++i) {
        cin >> jobs[i].time;
    }    
    for (int i = 1; i <= n; ++i){
        cin >> jobs[i].dl;
        jobs[i].index = i;
    }
    sort(jobs + 1, jobs + n + 1, cmp);
    priority_queue<pair<int, int>> pq;
    memset(mark, true, sizeof(mark));
    for (int i = 1; i <= n; ++i) {
        t += jobs[i].time;
        pq.push(make_pair(jobs[i].time, i));
        if (t > jobs[i].dl) {
            pair<int, int> tmp = pq.top();
            pq.pop();
            t -= tmp.first;
            mark[tmp.second] = false;
        }
    }
    for (int i = 1; i <= n; ++i) 
        if (mark[i]) cout << jobs[i].index << " ";
    for (int i = 1; i <= n; ++i) 
        if (!mark[i]) cout << jobs[i].index << " ";        
}
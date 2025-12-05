#include<iostream>
#include<climits>

using namespace std;

int scores[2*100000+7] = {0}, ranked[2*100000+7] = {0};
int n, m, score, ans;

int ranking(int x, int end){
    int begin = 1;
    int pos =  (begin + end) /2;
    while (begin < end) {
        if (scores[pos] > x) {
            begin = pos + 1; 
            pos = (begin + end) /2;
        } else
        if (scores[pos] < x){          
            end = pos ;
            pos = (begin + end) /2;
        } else {return pos;}
    }
    return begin;
}   
int main(){
    cin >> n;
    scores[0] = INT_MAX;
    for (int i = 1; i <= n; i++) {
        cin >> scores[i];
        if (scores[i] < scores[i-1]) ranked[i] = ranked[i-1] + 1;
        if (scores[i] == scores[i-1]) ranked[i] = ranked[i-1];
    }
    cin >> m;
    int pos = n;
    for (int i = 1; i <= m; i++){
        cin >> score;
        if (scores[n] > score) cout << ranked[n] + 1 << '\n';
        else {
            pos = ranking(score, pos);
            cout << ranked[pos] << '\n';
        }
    }
    return 0;
}
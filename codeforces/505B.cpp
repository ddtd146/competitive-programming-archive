#include<bits/stdc++.h>

using namespace std;

int a[22];
int c[22];
int res = 0;
int sum, easy, hard;
int n, l, r, x;

void out(){
    sum = hard = 0;
    easy = 1e9;
    for (int i = 1; i <= n; ++i) {
        if (a[i] == 1){
            sum += c[i];
            easy = min(easy, c[i]);
            hard = max(hard, c[i]);
        }
    }
    if (hard - easy >= x && sum >= l && sum <= r) ++res;
}

void backtrack(int i){
    for(int j = 0; j <= 1; ++j){
        a[i] = j;
        if (i == n) out();
        else backtrack(i+1);
    }
}

int main(){
    
    cin >> n >> l >> r >> x;
    for (int i = 1; i <= n; ++i) cin >> c[i];
    backtrack(1);
    cout << res;
}
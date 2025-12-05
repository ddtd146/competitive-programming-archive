#include<bits/stdc++.h>

#define N 100000+7

using namespace std;
int main(){
    int n;
    cin >> n;
    int color[N];
    int cnt[3] = {0};
    for(int i = 1; i <= n; ++i) {
        int x;
        cin >> x;
        color[i] = (x % 3 != 0);
        ++cnt[color[i]];
    }
    int z;
    if (cnt[0] <= cnt[1]) z = 0;
    if (cnt[0] > cnt[1])  z = 2;
    cnt[0] = cnt[1] = 0;
    cout << z << '\n'; 
    for (int i = 1; i <= n; ++i){
        if (cnt[color[i]] < n / 2) {
            ++cnt[color[i]];
            cout << color[i];
        }
        else {
            ++cnt[!color[i]];
            cout << !color[i];
        }
    }
}
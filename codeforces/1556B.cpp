#include<iostream>
#include<cmath>

using namespace std;

const int MAX = 10000+7;

int s(int x) {
    if (x>=0)return x;
    return -x;
}

int main(){
    int n, test;
    int x, odd, res1, res2, pos;
    cin >> test;
    while(test--) {
        cin >> n;
        pos = 1;
        odd = res1 = res2 = 0;
        for(int i = 1; i <= n; ++i){
            cin >> x; x = x % 2;
            if (x == 1) {
                odd++;
                res1 += s(i-pos);
                res2 += s(i-pos - 1);
                pos += 2;
            } 
        }
        if (s(2*odd - n) > 1) {cout << -1 << '\n'; continue;}
        if (s(2*odd - n) == 0) cout << min(res1, res2) << '\n';
        if (2*odd - n == 1) cout << res1 << '\n';
        if (2*odd - n == -1) cout << res2 << '\n';
    }
    return 0;
}
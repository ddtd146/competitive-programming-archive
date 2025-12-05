// two pointers

#include<iostream>
#include<algorithm>
#include <limits.h>
using namespace std;

const int MAX = 100000+7;

int s(int x) {
    if (x>0) return x;
    else return -x;
}

int main(){
    int n, res = INT_MAX;
    int b[MAX], c[MAX];
    cin >> n;
    for (int i = 1; i <= n; ++i) cin >> b[i];
    for (int i = 1; i <= n; ++i) cin >> c[i];
    sort(b+1, b+n+1);
    sort(c+1, c+n+1);
    int i = 1, j = n;
    while(i <= n && j >= 1) {
        if (b[i] + c[i] == 0) {cout << 0; return 0;}
        if (res > s(b[i] + c[j])) res = s(b[i]+c[j]);
        if (b[i] + c[j] > 0) j--;
        else i++;
    }
    cout << res;
}
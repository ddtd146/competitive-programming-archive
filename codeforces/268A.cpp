#include<iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    int h[30+7], a[30+7], res = 0;
    for (int i = 0; i < n; i++) cin >> h[i] >> a[i];
    for (int i = 1; i < n; ++i) {
        for (int j = 0;  j < i; ++j) {
            if (h[i] == a[j]) res ++;
            if (a[i] == h[j]) res++;
        }
    }
    cout << res;
}
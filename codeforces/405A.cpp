#include<iostream>
#include<algorithm>
#include<limits.h>

using namespace std;

int main(){
    int n, x = INT_MIN; 
    int c[100+7], r[100+7] = {0};
    cin >> n;
    for (int i = 0; i < n; ++i){
        cin >> c[i];
        for (int j = 0; j < c[i]; ++j) r[j]++;
        if (x < c[i]) x = c[i];
        c[i] = 0;
    }
    for (int i = 0; i < x; ++i) {
        for (int j = n-1; j >= n-r[i]; j--) 
            c[j] ++;
    }
    for (int i = 0; i<n; ++i) cout << c[i] << " ";
}
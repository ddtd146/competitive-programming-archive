#include<iostream>
#include<algorithm>
#include<stdio.h>

using namespace std;

int main(){
    int n, l, d = 0;
    int pos[1000+7];
    cin >> n >> l;
    for (int i = 1; i <= n; ++i) cin >> pos[i];
    sort(pos+1, pos+1+n);
    pos[n+1] = l;
    for (int i = 1; i <= n-1; ++i) 
        d = max(d, pos[i+1] - pos[i]); 
    double r = (double) d/2;
    if (r < pos[1]) r = pos[1];
    if (r < l - pos[n]) r = l - pos[n];
    printf("%.10f", r);
}
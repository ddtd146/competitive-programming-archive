/*
#include<iostream>
#include<algorithm>

using namespace std;

const int MAX = 100000;

int maxx(int x, int y) {
    if (x >= y) return x;
    return y;
}

int main(){
    int n, m, distance = 0;
    cin >> n >> m;
    int arr[MAX + 7];
    for (int i = 0; i < m; i++) cin >> arr[i];
    sort(arr, arr + m);
    distance = maxx(arr[0] - 0, n - 1 - arr[m -1]);
    for (int i = 1; i < m; i++) distance = maxx(distance, (arr[i] - arr[i-1]) / 2);
    cout << distance;
}


*/
// O(n) 
// each i, calculate the nearest station to the left : dp[i] = dp[i-1] + 1;
// each i, calculate the nearest station to the right: dp[i] = dp[i+1]+ 1; (with a reverse for loop)
#include<iostream>
#include<cmath>

using namespace std;

const int MAX = 100000 + 7;
int maxx(int x, int y, int z) {
    if (x >= y && x >= z) return x;
    if (y >= z && y >= x) return y;
    return z;
}

int main(){
    int n, m, distance = 0, x;
    int station[MAX] = {0};
    int disttl[MAX] ={0}, disttr[MAX] ={0};
    cin >> n >> m;
    for (int i = 0; i < m; i++) {
        cin >> x;
        station[x] = 1;
    }
    for (int i = 0; i < n; i++) {
        if (station[i] = 0) disttl[i] = disttl[i-1] + 1;
        else disttl[i] = 0;
    }
    for (int i = n - 1; i >= 0; i++) {
        if (station[i] = 0) disttr[i] = disttr[i+1] + 1;
        else disttr[i] = 0;
    }
    for (int i = 0; i < n; i++) distance = maxx(distance, disttl[i], disttr[i]);
    cout << distance;
}
#include<iostream>
#include<limits.h>
#include<math.h>

using namespace std;

int main() {
    int n, minn = INT_MAX, maxx= INT_MIN, res = 0; 
    cin >> n;
    int arr[100000+7];
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
        minn = min(minn, arr[i]);
        maxx = max(maxx, arr[i]);
    }
    for (int i = 0; i < n; ++i) {
        if (arr[i] > minn && arr[i] < maxx) res++;
    }
    cout << res;
}
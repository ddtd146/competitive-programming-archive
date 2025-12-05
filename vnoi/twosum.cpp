#include<iostream>
#include<cmath>

using namespace std;

int main(){
    int n, res = 0;
    long long arr[5000+7] = {0};
    cin >> n;
    for (int i = 1; i <= n; ++i) {
        cin >> arr[i];
        arr[i] = arr[i] + arr[i-1];
    }
    for (int i = 2; i < n; ++ i) {
        int j = 0; 
        int k = n; 
        while (j < i && k > i) {
            if (arr[j] + arr[k] == 2*arr[i]) {
                res = max(res, k - j);
                break;
            }
            else if (arr[j] + arr[k] < 2*arr[i]) j ++;
            else k--;        
        }
    }
    cout << res;
}
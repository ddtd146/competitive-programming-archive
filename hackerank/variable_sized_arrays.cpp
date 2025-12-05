#include<iostream>

using namespace std;
int n,q,x,a,b;
int arr[1000000+7];
int k[1000000+7];

int main(){
    cin >> n >> q;
    int ind = 0;
    k[0] = 0;
    for (int i = 1; i <= n; i++){
        cin >> k[i];
        for (int j = 1; j <= k[i]; j++) { 
            ind ++;
            cin >> x;
            arr[ind] = x;
        }
        k[i] = k[i] + k[i-1];
    }
    for (int i = 1; i <= q; i++){
        cin >> a >> b;
        cout << arr[k[a]+b+1] << endl;
    }
    return 0;
}
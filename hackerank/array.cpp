#include<iostream>

using namespace std;

int main(){
    int n;
    int array[1000+7];
    cin >> n;
    for (int i = 1; i <= n; i++){
        cin >> array[i];
    }
    for (int i = n; i >= 1; i--){
        cout << array[i] << " ";
    }
    return 0;
}
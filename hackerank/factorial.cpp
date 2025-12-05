#include<iostream>

using namespace std; 

calFactorial(int x){
    int arr[200+7];
    int k = 0; 
    int carry = 0;
    arr[1] = 1;  
    for(int i = 2; i <= x; i++) {
        for(int j = 1; j <= k; j++) {
            arr[j] = arr[j] * i + carry;
            
        }
    }
}

int main(){
    int n;
    cin >> n;
    calFactorial(n);
}
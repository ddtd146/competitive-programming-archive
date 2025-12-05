#include<iostream>
#include<stdio.h>

using namespace std;

int main(){
    int n, x, numPos = 0, numNeg = 0, numZer = 0;
    cin >> n; 
    for (int i = 1; i <= n; i++){
        cin >> x; 
        if (x > 0) numPos++;
        if (x < 0) numNeg++;
        if (x == 0) numZer++;
    }
    printf("%6f\n%6f\n%6f",(float) numPos/n, (float) numNeg/n, (float) numZer/n);
}
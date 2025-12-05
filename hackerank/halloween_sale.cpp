#include<iostream>

using namespace std;

int main(){
    int lowestPrice, highestPrice, budget, discount;
    cin >> highestPrice >> discount >> lowestPrice >> budget;
    int items = 0;
    int cost = highestPrice + discount;
    while (budget >= 0) {
        items ++;
        cost -= discount;
        if (cost <= lowestPrice) cost = lowestPrice;
        budget -= cost;
    }
    cout << items - 1 ;
}
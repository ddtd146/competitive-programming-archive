#include<iostream>
#include<algorithm>

using namespace std;

bool compFunc(int x, int y) {
    return(x > y);
}

int main(){
    int n;
    cin >> n;
    int coins[100+7];
    int ssum = 0;
    for (int i = 0; i < n; ++i) {
        cin >> coins[i];
        ssum += coins[i];
    }
    sort(coins, coins + n, compFunc);
    int sum = 0;
    for (int i = 0; i < n; ++i) {
        sum += coins[i];
        if (sum *2 > ssum) {cout << i + 1; return 0;}
    }
}
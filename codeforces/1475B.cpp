#include<iostream>

using namespace std;
/*
bool check(int x){
    if (x%2021 ==0) return true;
    if (x%2020 ==0) return true;
    int m = x/2021;
    while(m >= 0 && (x-m*2021) %2020 !=0) m--;
    return (m>=0) ;
}

int main() {
    int test, n;
    cin >> test;
    while (test--){
        cin >> n;
        if (check(n)) cout << "YES" << '\n';
        else cout << "NO" << '\n';
    }
}

*/

int main(){
    int test, n;
    cin >> test;
    while(test --){
        cin >> n;
        int y = n%2020;
        int x = (n-y)/2020 - y;
        if (x >= 0) cout << "YES" << '\n';
        else cout << "NO" << '\n';
    }
}
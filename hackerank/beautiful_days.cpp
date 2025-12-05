#include<iostream>
#include<string>

using namespace std;

int reverse(int x) {
    string str = to_string(x);
    string reverseStr;
    for(int i = str.size() - 1; i >= 0; i--) reverseStr += str[i];
    return stoi(reverseStr);
}

int main(){
    int a, b, k, beautifulDays = 0;
    cin >> a >> b >> k;
    for (int i = a; i <= b; i++) {
        if ((i - reverse(i)) % k == 0) beautifulDays++; 
    }
    cout << beautifulDays;
}
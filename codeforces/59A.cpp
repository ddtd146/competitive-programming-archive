#include<iostream>
#include<string>

using namespace std;

string str;
int up = 0, low = 0;

void lower(){
    for (int i = 0; i <str.size(); ++i) {
        if (str[i] >= 65 && str[i] <= 90) str[i] +=32;
    }
}

void upper(){
    for (int i = 0; i < str.size(); ++i) {
        if (str[i] >= 97 && str[i] <= 122) str[i] -=32;
    }
}

int main(){
    cin >> str;
    for (int i = 0; i < str.size(); ++i){
        if (str[i] >= 65 && str[i] <= 90) up++;
        else low++;
    }
    if (low >= up) lower();
    else upper();
    cout << str;
}
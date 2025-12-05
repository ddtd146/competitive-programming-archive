#include<iostream>
#include<cstring>

using namespace std; 

int main(){
    string str1, str2;
    getline(cin, str1);
    getline(cin, str2);
    cout << str1.length() <<" " << str2.size() << "\n";
    cout << str1 + str2 << "\n";
    char tg = str1[0];
    str1[0] = str2[0];
    str2[0] = tg;
    cout << str1 << " " << str2;
    return 0;
}


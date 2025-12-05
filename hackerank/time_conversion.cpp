#include<iostream>
#include<string>
#include<cstdio>

using namespace std;

int main(){
    string time;
    cin >> time;
    int hh = (time[0] - '0')*10 + (time[1] - '0');
    string ms = time.substr(3, 5);
    if (hh < 12 && time[8] == 'P') hh+=12;
    if (hh == 12 && time[8] == 'A') hh = 0;
    printf("%02d", hh);
    cout << ':' << ms;
}
#include<iostream>
#include<cstdio>

using namespace std;

int main(){
    int year, day = 256, month = 0;
    int numDay[13]={0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    cin >> year; 
    if (year % 4 == 0 && year <= 1917) numDay[2] = 29;
    if ((year % 4 == 0 && year % 100 != 0 && year >= 1919) || (year % 400 == 0 && year >= 1919)) numDay[2] = 29;
    if (year == 1918) {
        cout << "26.09.1918";
        return 0;
    }
    while(day > numDay[month]) {
        month++;
        day -= numDay[month];
    }
    printf("%02d.%02d.%04d", day, month + 1, year);
    return 0;
}
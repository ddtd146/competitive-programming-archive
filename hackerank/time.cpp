#include<iostream>
#include<string>

using namespace std;
int main(){
    string hours[14] = {"", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten", "eleven", "twelve", "one"};
    string minutes[31+7];
    minutes[1] = "one minute";
    for (int i = 2; i <= 12; i++) minutes[i] = hours[i] + " minutes";
    for (int i = 14; i <= 19; i++) minutes[i] = hours[i - 10] + "teen" + " minutes";
    for (int i = 21; i <=29; i++) minutes[i] = "twenty " + hours[i - 20] + " minutes";
    minutes[13] = "thirteen minutes"; minutes[15] = "quarter"; minutes[30] = "half"; 
    minutes[20] = "twenty minutes";
    int hour, minute;
    cin >> hour >> minute;    
    if (minute == 0) cout << hours[hour] << " o' clock"; 

    if (minute > 30) cout << minutes[60 - minute] << " to " << hours[hour + 1]; 
    if (minute < 31 && minute > 0) cout << minutes[minute] << " past " << hours[hour];
}
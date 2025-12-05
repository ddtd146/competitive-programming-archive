#include <iostream>
#include<string>

using namespace std;

int main(){
    int steps;
    string path;
    cin >> steps;
    cin.ignore(32767, '\n');
    getline(cin, path);
    int height = 0, numVal = 0;
    for (int i = 0; i < steps; i++){
        if (path[i] == 'U') height = height + 1;
        else height = height - 1;
        if (height == 0 && path[i] == 'U') numVal ++;
    }
    cout << numVal;
}
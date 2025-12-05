#include<iostream>
#include<string>

using namespace std;

int main(){
    string str;
    int n = 1;
    cin >> str;
    for (int i = 1; i < str.size(); ++i) {
        if (str[i] == str[i-1]) {
            ++n;
            if (n >= 7) {
                cout << "YES"; return 0;
            }
        }
        else {
            if (n >= 7) {
                cout << "YES"; return 0;
            }
            n = 1;
        }
    }
    cout << "NO";
}
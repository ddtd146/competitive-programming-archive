#include<iostream>
#include<string>

using namespace std;

int main(){
    string str, ss= "";
    cin >> str;
    while(str.size() > 0){
        while(str.substr(0, 3) == "WUB") str.erase(0, 3);
        if (str.size() > 0) {
            ss += str[0];
            str.erase(0, 1);
        }
        if (str.substr(0, 3) == "WUB") ss += ' ';
    }
    if (ss[ss.size()-1] == ' ') ss.erase(ss.size()-1,1);
    cout << ss;
}
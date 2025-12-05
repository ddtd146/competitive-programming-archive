#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main(){
    string w, ww;
    int test_case;
    cin >> test_case;
    cin.ignore(32727, '\n');
    for(int t = 1; t <= test_case; t++) {
        getline(cin, w);
        ww = w;
        next_permutation(w.begin(), w.end());
        if (w <= ww) cout << "no answer" << '\n';
        else cout << w <<'\n';
    }
}
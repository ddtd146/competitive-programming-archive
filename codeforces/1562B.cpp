#include<iostream>
#include<string>

using namespace std;

int main(){
    int test, k;
    string n;
    bool ok;
    cin >> test;
    while (test--) {
        cin >> k >> n;
        ok = false;
        for (int i = 0; i < n.size(); ++i) {
            if (n[i] != '2' || n[i] != '3' || n[i] != '5' || n[i] != '7') {
                cout << 1 << '\n' << n[i];
                ok = true;
                break;
            }
            if (ok) continue;
            
        }
    }
}
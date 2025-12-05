#include<iostream>
#include<string>

using namespace std;

int games, n, emp = 0;
string b;
int d[97] ={0};
bool ok;
bool check(){
    for (int i = 0; i < n; i++) {
        if (b[i] != b[i-1] && b[i] != b[i+1]) return false;
    } 
    return true;
}

int main(){
    cin >> games;
    while(games--){
        cin >> n >> b;
        emp = 0;
        ok = true;
        fill(d, d+97, 0);
        for (int i = 0; i < n; i++) {
            if (b[i] == '_') emp++; //number of empty place;
            else d[b[i]] ++; 
        }
        if (emp == 0) {
            if (check()) cout << "YES" << '\n';
            else cout << "NO" << '\n';
            continue;
        }
        for (int i = 65; i <= 90; ++i) 
            if (d[i] == 1) {
                cout << "NO" << '\n';
                ok = false;
                break;
            }
        if (!ok) continue;
        cout << "YES" << '\n';
    }
}
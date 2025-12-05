#include<iostream>
#include<string>
#include<sstream>

using namespace std;

bool check(long long x){
    if (x == 1) return true;
    long long y = x*x;
    string s = to_string(x);
    string ss = to_string(y);
    int d = s.size();
    int dd = ss.size();
    int pos = d;
    if (dd == 2*d - 1) pos = d - 1;
    string sr = ss.substr(pos);
    string sl = ss.substr(0, pos);
    stringstream ssr(sr);
    stringstream ssl(sl);
    long long xl, xr;
    ssr >> xr;
    ssl >> xl;
    return (x == xl + xr);
}

int main(){
    int p, q, res = 0;
    cin >> p >> q;
    for(long long i = p; i <= q; i++){
        if (check(i)) {cout << i << ' '; res = 1;};
    }
    if (res == 0) cout << "INVALID RANGE";
}
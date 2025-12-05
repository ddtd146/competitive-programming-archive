#include <iostream>
#include <cmath>

using namespace std;
int main(){
    int n, m, topic = 0, res = 0, count =0 ;
    cin >> n >> m;
    cin.ignore(32767, '\n');
    string topics[500+7] ;
    for (int i = 1; i <= n; i++) {
        getline(cin, topics[i]);
    }
    for (int i = 1; i < n; i++) {
        for (int j = i+1; j <= n; j++) {
            topic = 0;
            for (int k = 0; k < m; k++) {
                if (topics[i][k] == '1' || topics[j][k] == '1') topic++;    
            }
            if (res == topic) count ++;
            else if (res < topic) {
                count = 1;
                res = topic;
            }
        }
    }
    cout << res << '\n' << count;
}
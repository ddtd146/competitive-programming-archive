#include<iostream>
#include<algorithm>

using namespace std;

int test_case, n, x;
    int containers[100+7][100+7];
    int ball[100+7] = {0};
    int cap[100+7] = {0};
    string res;

int main(){
    
    cin >> test_case;
    for (int t = 1; t <= test_case; t++) {
        cin >> n;
        res = "Possible";
        for ( int i = 1; i <= n; i++) ball[i] = cap[i] = 0;
        for (int i = 1; i <= n; i++){
            for(int j = 1; j <= n; j++) {
                cin >> x;
                ball[j] += x;
                cap[i] += x;
            }
        }
        sort(ball + 1, ball + 1 + n);
        sort(cap + 1, cap + 1 + n);
        for ( int i = 1; i <= n; i++) {
            if (ball[i] != cap[i]) {
                res = "Impossible";
            } 
        }
        cout << res << '\n';
    }
}
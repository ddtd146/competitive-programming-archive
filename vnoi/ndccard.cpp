/*#include<iostream>
#include<algorithm>
#include<cmath>

using namespace std;

const int MAX = 1e4 + 7;

int main(){
    int n, m, x = 0, res = 0;
    cin >> n >> m;
    int cards[MAX], pos[500000+7];
    for (int i = 1; i <= n; ++i) cin >> cards[i];
    sort(cards + 1, cards + 1 + n);
    for (int i = 1; i <= n; ++i) pos[cards[i]] = i;
    for (int i = 1; i <= m; ++i) {
        if (pos[i] > 0) x = pos[i];
        pos[i] = x;
    }
    int i = 1;
    int j = n;
    while(i <= n && j >= 1) {
        if (cards[i] + cards[j] > m) j--;
        else {
            if (pos[m-cards[i]-cards[j]] > 0 && pos[m-cards[i]-cards[j]] != i && pos[m-cards[i]-cards[j]] != j) {
                res = max(res, cards[pos[m-cards[i]-cards[j]]] + cards[i] + cards[j]);
            }
            i++;
        }
    }
    cout << res;
}*/

#include<iostream>
#include<algorithm>

using namespace std;

const int MAX = 1e4 + 7;

int main(){
    int n, m, res = 0;
    cin >> n >> m;
    int cards[MAX];
    for (int i = 1; i <= n; ++i) cin >> cards[i];
    sort(cards+1, cards+1+n);
    for (int i = 1; i < n; ++i) {
        if (cards[i] >= m) continue;
        int j = i + 1;
        int k = n; 
        while (j <= n && k >= i+1 && j < k) {
            if (cards[i] + cards[j] + cards[k] <= m) {
                res = max(res, cards[i] + cards[j] + cards[k]);
                j++;
            }
            else k--;
        }
    }
    cout << res;
}
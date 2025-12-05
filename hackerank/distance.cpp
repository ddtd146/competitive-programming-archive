#include <iostream>
#include <limits.h>

using namespace std;

int main(){
    int n, distance = INT_MAX, x;
    int pos[100000+7];
    fill(pos, pos + 100000+7, -1);
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> x;
        if (pos[x] >= 0){
            distance = min (distance, i - pos[x]);
        }
        pos[x] = i;
    }
    cout << distance;
}
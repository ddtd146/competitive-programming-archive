#include <iostream>
#include <cmath>

using namespace std;

//tle
/*
int square_root(int x){
    const float error = 0.00001;
    float y = 1.0;
    while (y*y - x > error || y*y - x < - error) 
        y = (x /y + y) /2.0;
    return floor(y);
}

int main(){
    int q, a, b, ra, rb;
    cin >> q;
    for (int i = 1; i <= q; i++) {
        cin >> a >> b;
        ra = square_root(a);
        rb = square_root(b); 
        if (a != ra*ra) ra++;
        cout << rb - ra + 1 << '\n';
    }
}
*/

// binary_search
int square[31622+7];

void creSquare(){
    for (int i = 1; i <= 31622+7; i++) square[i] = i*i;
}

int square_root(int x){
    int low = 1, high = 31622+7, mid; 
    mid = (low + high) /2;
    while (low < high) {
        if (square[mid] == x) return mid;
        if (square[mid] < x) {
            low = mid + 1;
            mid = (low + high) /2;
        } else {
            high = mid;
            mid = (low + high) /2;
        }
    }
    return low;
}

int main(){
    int q, a, b,  ra, rb;
    creSquare();
    cin >> q;
    for(int i = 1; i <= q; i++){
        cin >> a >> b;
        ra = square_root(a);
        rb = square_root(b);
        if (rb*rb != b) rb --;
        cout << rb - ra + 1 << '\n';
    }
}


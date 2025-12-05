// #include<iostream>

// using namespace std;

// int main(){
//     int x;
//     cin >> x;
//     cout << x << endl;
//     cout << &x << endl;
//     cout << *&x << endl;
//     *&x = 2;
//     cout << *&x;    
//     cout << x;
//     return 0;
// }

// #include<iostream>

// using namespace std;

// int main(){
//     int *p, val;
//     cin >> val;
//     p = &val;
//     cout << *p;
// }

#include <stdio.h>

void update(int *a,int *b) {
    // Complete this function    
    printf("%d\n", *a + *b);
    if (*a > *b) {printf("%d", *a - *b);}
    else {printf("%d", *b - *a);}   
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    return 0;
}
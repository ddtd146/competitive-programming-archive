#include<iostream>

using namespace std;

int m, n;
int height[100 + 7][100 + 7] ={0};
int area = 0;

void inp(){
    cin >> m >> n;
    for (int i = 1; i <= m; ++i)
        for (int j = 1; j <= n; ++j) 
            cin >> height[i][j];
    
}

void process(){
    for (int i = 1; i <= m; ++i) 
        for (int j = 1; j <= n; ++j) {
            if (height[i][j] > height[i-1][j]) area += height[i][j] - height[i-1][j];
            if (height[i][j] > height[i][j-1]) area += height[i][j] - height[i][j-1];
            if (height[i][j] > height[i+1][j]) area += height[i][j] - height[i+1][j];
            if (height[i][j] > height[i][j+1]) area += height[i][j] - height[i][j+1];
        }
}

void out(){
    cout << area + m*n*2; // surface area
}

int main(){
    inp();
    process();
    out();
}
#include<iostream>

using namespace std;

int r, c, n;
int grid[200+7][200+7] = {0};
int state1[200+7][200+7], state2[200+7][200+7];
char cell;

bool  check(int x, int y){
    if (grid[x][y] == 79) return false;
    if (x >= 1 && grid[x-1][y] == 79) return false;
    if (y >= 1 && grid[x][y-1] == 79) return false;
    if (x < r-1 && grid[x+1][y] == 79) return false;
    if (y < c-1 && grid[x][y+1] == 79) return false;
    return true;
}

void creState1(){
    for (int i = 0; i < r; ++i) {
        for (int j = 0; j < c; ++j) {
            if (check(i, j)) state1[i][j] = 79;
            else state1[i][j] = 46;
        }
    }
    for (int i = 0; i < r; ++i) 
        for (int j = 0; j < c; ++j) 
            grid[i][j] = state1[i][j];
}

void creState2(){
    for (int i = 0; i < r; ++i) {
        for (int j = 0; j < c; ++j) {
            if (check(i, j)) state2[i][j] = 79;
            else state2[i][j] = 46;
        }
    }
}

int main(){
    cin >> r >> c >> n;
    for (int i = 0; i < r; ++i) 
        for (int j = 0; j < c; ++j) {
            cin >> cell;
            grid[i][j] = cell;
        }
    if (n == 1) {
        for (int i = 0; i < r; ++i) {
            for (int j  = 0; j < c; ++j) 
                cout << (char) grid[i][j];
            cout << '\n';
        }
        return 0;
    }
    if (n %2 == 0) {
        for (int i = 0; i < r; ++i) {
            for(int j = 0; j < c; ++j) cout << 'O';
            cout << '\n';
        }
    }
    else {
        creState1();
        creState2();
        if (n /2 %2 == 1) {
            for (int i = 0; i < r; ++i) {
                for (int j  = 0; j < c; ++j) 
                    cout << (char)state1[i][j];
                cout << '\n';
            }
        }
        else {
            for (int i = 0; i < r; ++i) {
                for (int j  = 0; j < c; ++j) 
                    cout << (char) state2[i][j];
                cout << '\n';
            }
        }  
    }
}
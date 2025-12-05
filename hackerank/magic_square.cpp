#include<iostream>
#include<cmath>

using namespace std;

int magicSquare[8][9] = {{8, 1, 6, 3, 5, 7, 4, 9, 2},
                          {6, 1, 8, 7, 5, 3, 2, 9, 4},
                          {4, 9, 2, 3, 5, 7, 8, 1, 6},
                          {2, 9, 4, 7, 5, 3, 6, 1, 8},
                          {8, 3, 4, 1, 5, 9, 6, 7, 2},
                          {4, 3, 8, 9, 5, 1, 2, 7, 6},
                          {6, 7, 2, 1, 5, 9, 8, 3, 4},
                          {2, 7, 6, 9, 5, 1, 4, 3, 8}};

int  main(){
    int square[9];
    for (int i = 0; i <= 8; i++) cin >> square[i];
    int cost = 0, minCost = 100;
    for (int i = 0; i <= 7; i++) {
        cost = 0; 
        for (int j = 0; j <= 8; j++){
            if (square[j] != magicSquare[i][j]) cost += abs(square[j] - magicSquare[i][j]);
        }
        if (minCost > cost) minCost = cost;
    } 
    cout << minCost;
}

// there are 8 magic square 3x3 
/* guess:
    với mỗi input, so sánh xem gần giống với magic square nào nhất, tính cost
*/

 
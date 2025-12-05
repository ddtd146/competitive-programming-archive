// #include<iostream>

// using namespace std;

// int n, k, rowq, colq, attacked = 0, row, col;
// int board[10000+7][10000+7] = {0};

// void moveVertical(){
//     int posY = rowq, posX = colq;
//     while (posY < n) {
//         posY++;
//         if (board[posY][posX] != 2) board[posY][posX] = 1;
//         else break;
//     } 
//     while(posY > 1) {
//         posY -- ;
//         if (board[posY][posX] != 2) board[posY][posX] = 1;
//         else break;
//     }
// }

// void moveHorizontal(){
//     int posY = rowq, posX = colq;
//     while (posX < n) {
//         posX++;
//         if (board[posY][posX] != 2) board[posY][posX] = 1;
//         else break;
//     } 
//     while(posX > 1) {
//         posX -- ;
//         if (board[posY][posX] != 2) board[posY][posX] = 1;
//         else break;
//     }
// }

// void moveCross(){
//     int posY = rowq, posX = colq;
//     while(posY < n && posX < n) {
//         posY ++;
//         posX ++;
//         if (board[posY][posX] != 2) board[posY][posX] = 1;
//         else break;
//     }
//     while(posY > 1 && posX > 1) {
//         posY--;
//         posX--;
//         if (board[posY][posX] != 2) board[posY][posX] = 1;
//         else break;
//     }
//     while(posY < n && posX > 1) {
//         posY ++;
//         posX --;
//         if (board[posY][posX] != 2) board[posY][posX] = 1;
//         else break;
//     }
//     while(posX < n && posY > 1) {
//         posX ++;
//         posY --;
//         if (board[posY][posX] != 2) board[posY][posX] = 1;
//         else break;
//     }
// }

// void count(){
//     for (int i = 1; i <= n; i++) {
//         for(int j = 1; j <= n; j++) 
//             if (board[i][j] == 1) attacked++;
//     }
// }
// int main(){
//     cin >> n >> k;
//     cin >> rowq >> colq;
//     board[rowq][colq] = 1;
//     for (int i = 1; i <= k; i++) {
//         cin >> row >> col;
//         board[row][col] = 2;
//     }
//     moveVertical();
//     moveHorizontal();
//     moveCross();
//     count();
// }

#include<iostream>

using namespace std;

int main(){
    int n, k, rq, cq, r, c;
    cin >> n >> k;
    cin >> rq >> cq;
    int cl = 0, rh = n + 1, rlr = max(rq - (n+1 - cq), 0), rhr =min(rq + (n+1 - cq), n+1), rhl =min(rq + (cq - 0), n+1), ch = n + 1, rl = 0, rll = max(rq - (cq - 0),0);
    for (int i = 1; i <= k; i++) {
        cin >> r >> c; 
        if (r == rq && c < cq) cl = max(cl, c); 
        if (r == rq && c > cq) ch = min(ch, c);
        if (c == cq && r < rq) rl = max(rl, r);
        if (c == cq && r > rq) rh = min(rh, r);
        if (r - c == rq - cq && r > rq) rhr = min(rhr, r);  // row _ high _ right;
        if (r - c == rq - cq && r < rq) rll = max(rll, r); // row _ low _ left;
        if (r + c == rq + cq && r > rq) rhl = min(rhl, r); // row_high_left;
        if (r + c == rq + cq && r < rq) rlr = max(rlr, r);
    }
    cout << ch - cl + rh - rl + rhr - rll + rhl - rlr - 8;
}
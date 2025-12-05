#include <algorithm>
#include <array>
#include <bitset> 
#include <climits>
#include <cstdint>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <iostream>
#include <list>
#include <map>
#include <queue>
#include <random>
#include <set>
#include <stack>
#include <string>
#include <utility>
#include <unordered_set>
#include <unordered_map>
#include <vector>

#define ll long long
#define uint unsigned int
#define pii pair <int , int>
#define pis pair <int, string>

#define pb push_back
#define mp make_pair
#define all(x) x.begin(), x.end()
#define fi first
#define se second

#define forn(i, n) for (int i = 0; i < n; ++i)
#define foru(i, a, b) for (int i = a; i <= b; ++i) 
#define ford(i, a, b) for (int i = a; i >= b; --i)
#define w(t) while(t--)

const int N = 14062003;

using namespace std;

int cx[8] = {1, 1, 2, 2, -1, -1, -2, -2};
int cy[8] = {2, -2, 1, -1, 2, -2, 1, -1};

bool isSafe(int x, int y, vector<vector<int>>& board){
    int n = board.size();
    return (x >= 0 && x < n && y >= 0 && y < n && board[x][y] == 0);
}

int getDegree(int x, int y, vector<vector<int>>& board){
    int count = 0;
    int n = board.size();
    forn(i, n)
        if (isSafe(x + cx[i], y + cy[i], board)) count++;
    return count;
}

void printBoard(vector<vector<int>>& board){
    int n = board.size();
    forn(i, n){
        forn(j, n)
            cout << board[i][j] << " ";
        cout << "\n";
    }
}

bool findNextMove(int &x, int&y, vector<vector<int>>& board){
    int n = board.size();
    int minDegree = n + 1;
    int minDegreeIndex = -1;
    forn(i, 8){
        int nextX = x + cx[i];
        int nextY = y + cy[i];

        if (isSafe(nextX, nextY, board)) {
            int degree = getDegree(nextX, nextY, board);
            if (degree < minDegree){
                minDegree = degree;
                minDegreeIndex = i;
            }
        }
    }

    if (minDegreeIndex == -1) return false;
    x += cx[minDegreeIndex];
    y += cy[minDegreeIndex];

    return true;
}

void solve(){
    int n;
    cin >> n;
    vector<vector<int>> board(n, vector<int>(n, 0));
    int x = 0, y = 0;
    board[x][y] = 1;
    foru(move, 2, n*n) {
        if (!findNextMove(x, y, board)) return; 
        board[x][y] = move;
    }
    printBoard(board);
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t; 
    cin >> t;
    w(t){
        solve();
    }
    return 0;
}
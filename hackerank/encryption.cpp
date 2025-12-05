#include<iostream>
#include<cmath>
#include<string>
#include<stdio.h>

using namespace std;

int main(){
    string plainText;
    int pos = 0, collums, rows; 
    int arr[100][100] ={0};
    getline(cin, plainText);
    while(pos < plainText.size() ) {
        if (plainText[pos] != ' ') pos ++;
        else plainText.erase(pos);
    }
    int len = plainText.size();
    rows = (int) sqrt(len);
    collums = rows;
    if(rows * collums < len) collums++;
    if(rows * collums < len) rows ++;
    pos = - 1;
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < collums; j++){
            pos ++;
            arr[i][j] = plainText[pos];
        }
    }
    for(int i = 0; i < collums; i++){
        for(int j = 0; j < rows; j++) {
            if (arr[j][i] != 0) printf("%c", arr[j][i]);
        }
        cout << ' '; 
    }
}


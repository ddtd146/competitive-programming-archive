#include<bits/stdc++.h>

using namespace std;

int m,n;
char maze[50+7][50+7];

void isolate(int x, int y){
    if (maze[x][y+1] == '.') maze[x][y+1] = '#';
    if (maze[x][y-1] == '.') maze[x][y+1] = '#';
    if (maze[x+1][y] == '.') maze[x][y+1] = '#';
    if (maze[x-1][y] == '.') maze[x][y+1] = '#';
}

void solve(){
    cin >> n >> m;
    for (int i = 1; i <= n; ++i)
        for(int j = 1; j <= m; ++j)
            cin >> maze[i][j];
    for(int i = 1; i <= n; ++i)
        for(int j = 1; j <= m; ++j)
            if (maze[i][j] == 'B' ) 
                isolate(i, j);
    
        
}

int main(){
    int t;
    cin >> t;
    
    while(t--){
        solve();
    }
}
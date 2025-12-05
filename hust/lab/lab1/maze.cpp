
#include <bits/stdc++.h>

using namespace std;

int a[1007][1007];
int dx[4] = {-1, 0, 1, 0};
int dy[4] = {0, 1, 0, -1};
int p[1007][1007] ;
int n, m, r, c;
void bfs(int i, int j) {
  queue<pair<int, int> > q;
  q.push(make_pair(i, j));
  while(!q.empty()){
    pair<int, int> u = q.front();
    a[u.first][u.second] = 1;
    q.pop();
    for (int d = 0; d < 4; ++d) {
        int ii = u.first + dx[d];
      int jj = u.second + dy[d];
        if (a[ii][jj] == 0 & (ii >= 0 & ii < n) && (jj >= 0 && jj < m)) {
          p[ii][jj] = p[u.first][u.second] + 1;
          q.push(make_pair(ii, jj));
          a[ii][jj] = 1;
        }
    }	
  }
}

int main(){
  int res = INT_MAX;
  cin >> n >> m >> r >> c;
  r--;
  c--;
  for (int i = 0; i < n; ++i)
    for (int j = 0; j < m; ++j) {
    cin >> a[i][j];
    p[i][j] = 0;
  }
    		
  bfs(r, c);
  for (int i = 0; i < m; ++i) {
    if (p[0][i] != 0) res = min(res, p[0][i]);
    if (p[n-1][i] != 0) res = min(res, p[n-1][i]);
  }
  for (int i = 0; i < n; ++i) {
    if (p[i][0] != 0) res = min(res, p[i][0]);
    if (p[i][m-1] != 0) res = min(res, p[i][m-1]);
  }
  res = res + 1;
  if (res <= 0) cout << -1;
  else cout << res;
  return 0;
}

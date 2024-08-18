#include<bits/stdc++.h>
using namespace std;
int dy[4] = {-1,0,1,0};
int dx[4] = {0,1,0,-1};
int m,n,k,y,x,ret,ny,nx,t;
int a[100][100];
bool visited[100][100];
//2차원 좌표이기 때문에 4방향 탐색도 있어야함.
void dfs(int y, int x){
    visited[y][x] = 1;
    for(int i = 0; i < 4; i++){
        ny = y + dy[i];
        nx = x + dx[i];
        if(ny < 0 || nx < 0 || ny >= n || nx >= n) continue;
        if(a[ny][nx] == 1 && !visited[ny][nx]) dfs(ny,nx);
    }
    return;
}

int main(){
    cin.tie(NULL);
    cout.tie(NULL);
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> a[i][j];
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            //방문하지 않았다면
            if(a[i][j] == 1 && !visited[i][j]){
                ret++; dfs(i,j);
            }
        }
    }
}
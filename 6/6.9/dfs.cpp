#include<bits/stdc++.h>
using namespace std;
int dy[4] = {-1,0,1,0};
int dx[4] = {0,1,0,-1};

int m,n,k,y,x,ret,ny,nx,t;
int a[104][104];
bool visited[104][104];
void dfs(int y, int x){
    visited[y][x] = 1;
    cout << y << " : " << x << '\n';
    for(int i = 0; i < 4; i++){
        ny = y + dy[i];
        nx = x + dx[i];
        //underflow, overflow check
        if(ny < 0 || nx < 0 || ny >= n || nx >= m) continue;
        //방문되어 있지 않다면 dfs호출
        if(a[ny][nx] == 1 && !visited[ny][nx]){
            dfs(ny,nx);
        }
    }
    return; 
}

int main(){
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> n >> m;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> a[i][j];
        }
    }
    
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(a[i][j] == 1 && !visited[i][j]){
                cout << i << " : " << j << '\n' << "dfs가 시작됩니다.\n";
                dfs(i,j);
                ret++; 
            }
        }
    }
    cout << ret << '\n';
    return 0;
}

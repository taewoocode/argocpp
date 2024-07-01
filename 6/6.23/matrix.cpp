#include<bits/stdc++.h>
using namespace std;
const int v = 20;
bool a[v][v];
bool visited[v];

void go(int u){
    visited[u] = 1; //방문처리
    cout << u << '\n';
    for(int i = 0; i < v; i++){
        if(visited[i]){ //만약 방문했다면
            continue; //다음반복으로 
        } else if(visited[i] == 0){
            go(i);
        }
    }
    return;
}

int main(){
    a[1][2] = 1; a[1][3] = 1; a[3][4] = 1;
    a[2][1] = 1; a[3][1] = 1; a[4][3] = 1;

    for(int i = 0; i < v; i++){
        for(int j = 0; j < v; j++){
            if(a[i][j] && visited[i] == 0){
                go(i);
            }
        }
    }
    return 0;
}
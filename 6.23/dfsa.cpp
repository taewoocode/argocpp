#include<bits/stdc++.h>
using namespace std;
const int n = 6;
vector<int> adj[n];
int visited[n]; //방문을 처리할 배열
int dfs(int u){ 
    visited[u] = 1; //노드를 방문했다고 색칠
    cout << u << '\n'; 
    for(int v : adj[u]){ // 그 노드와 인접해 있는 v
        if(visited[v] == 0){ // 방문하지 않았다면 ?
            dfs(v); //dfs를 호출
        }
    }
}

int dfs(int u){
    visited[u] == 1;
    cout << u << '\n';
    for(int v : adj[u]){
        if(visited[v] == 0){
            dfs(v);
        }
    }
}

#include<bits/stdc++.h>
using namespace std;
const int n = 6;
vector<int> adj[n];
int visited[n];
void dfs(int u){
    visited[u] = 1;
    cout << u << '\n';
    for(int v : adj[u]){
        if(visited[v] == 0){
            dfs(v);
        }
    }
}

int main(){
    adj[1].push_back(2);
    adj[1].push_back(3);
    adj[2].push_back(4);
    adj[4].push_back(2);
    adj[2].push_back(5);
    dfs(1); 
}

//DFS 수도코드
/*
dfs(u, adj){
    u.visited = 1; 
    for v adj[u]; //
    if(v.visted == 0){
        dfs(u.adj)//방문이 안되어 있다면 호출을 한다.
    }
}
*/
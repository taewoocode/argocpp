#include<bits/stdc++.h>
using namespace std;
const int n = 6;
vector<int> adj[n]; //방문한 배열과 인접한 배열(노드)
int visited[n]; //방문한 배열(노드)
void dfs(int u){
    visited[u] = 1;
    cout << u << '\n';
    for(auto v : adj[u]){
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

    return 0;
}
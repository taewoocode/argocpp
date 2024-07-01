#include<bits/stdc++.h>
using namespace std;
const int n = 10;
vector<int> adj[n];
int visited[n];

void dfs(int u){
    visited[u] = 1; //방문한 노드 색칠
    cout << u << '\n';
    for(int there : adj[u]){
        if(visited[there] == 0){
            dfs(there);
        }
    }
}

int main(){
    adj[1].push_back(2);
    adj[2].push_back(1);

    adj[1].push_back(3);
    adj[3].push_back(1);

    adj[1].push_back(4);
    adj[4].push_back(1);

    for(int i = 0; i < n; i++){
        if(adj[i].size() && visited[i] == 0){
            dfs(i);
        }
    }



    

    // for(int i = 0; i < 1; i++){
    //     for(int there : adj[i]){
    //         cout << there << ' ';
    //     }
    // }
    return 0;
}
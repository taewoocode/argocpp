#include<bits/stdc++.h>
using namespace std;
const int n = 6;
vector<int> adj[n];
int visited[n];
void dfs(int u){
    visited[u] = 1;
    cout << u << '\n'; // debuging
    for(int v : adj[u]){
        if(visited[v] == 0){ //방문하지 않았다면
            dfs(v); //노드에 대해서 깊이 우선 탐색을 시작한다.
        }
    }
    cout << u << "로부터 시작된 함수가 종료되었습니다." << '\n'; //debuging
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

/*
void dfs(int u) {
    visited[u] = 1; // 현재 노드를 방문했다고 표시합니다.

    // 인접한 모든 노드들을 확인합니다.
    for(int v : adj[u]){
        // 만약 노드 v가 아직 방문되지 않았다면,
        if(visited[v] == 0){
            // 노드 v에 대해 깊이 우선 탐색을 수행합니다.
            dfs(v);
        }
    }
}
*/
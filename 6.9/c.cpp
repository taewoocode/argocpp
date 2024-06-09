#include<bits/stdc++.h>
using namespace std;

// 정점의 개수를 상수 V로 정의합니다.
const int V = 10;
// 각 정점에 연결된 인접 정점을 저장할 벡터 배열 adj를 선언합니다.
vector<int> adj[V];
// 각 정점의 방문 여부를 저장할 배열 visited를 선언합니다.
int visited[V];

// 깊이 우선 탐색(DFS)을 수행하는 함수 go를 정의합니다.
void go(int idx){
    // 현재 방문한 정점을 출력합니다.
    cout << idx << '\n';
    // 현재 정점을 방문했다고 표시합니다.
    visited[idx] = 1;
    // 현재 정점에 연결된 모든 정점을 순회합니다.
    for(int there : adj[idx]){
        // 순회하면서 만약 이 정점이 이미 방문되어 있다면, continue로 넘어갑니다.
        if(visited[there]){
            continue;
        }
        // 방문하지 않은 정점에 대해서 재귀적으로 go 함수를 호출합니다.
        go(there);
    }
    return;
}

int main(){
    // 그래프를 정의합니다. 여기서는 무방향 그래프를 정의하고 있습니다.
    adj[1].push_back(2); // 정점 1과 정점 2를 연결합니다.
    adj[2].push_back(1); // 무방향이기 때문에 정점 2와 정점 1도 연결합니다.

    adj[1].push_back(3); // 정점 1과 정점 3을 연결합니다.
    adj[3].push_back(1); // 정점 1과 정점 1을 연결합니다 (자기 자신과의 연결).

    adj[3].push_back(4); // 정점 3과 정점 4를 연결합니다.
    adj[4].push_back(3); // 무방향이기 때문에 정점 4와 정점 3도 연결합니다.
    
    // 모든 정점을 순회합니다.
    for(int i = 0; i < V; i++){
        // 만약에 연결되어 있는 정점이 있고, 해당 노드를 방문하지 않았다면, go 함수를 호출합니다.
        if(adj[i].size() && visited[i] == 0) go(i);
    }
}

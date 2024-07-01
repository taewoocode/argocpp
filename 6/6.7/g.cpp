#include<bits/stdc++.h>
using namespace std;

// 상수 V를 10으로 설정
const int V = 10;

// 인접 행렬과 방문 배열 선언
bool a[V][V], visited[V];

// 깊이 우선 탐색(DFS)를 수행하는 함수 go 선언
void go(int from){
    visited[from] = 1;  // 현재 노드를 방문했다고 표시
    cout << from << '\n';  // 현재 노드 출력
    for(int i = 0; i < V; i++){
        if(visited[i]){  // 이미 방문한 노드는 건너뜀
            continue;
        }
        if(a[from][i]){  // 현재 노드와 연결된 노드가 있으면
            go(i);  // 그 노드로 재귀 호출하여 탐색 계속
        }
    }
    return;
}

int main(){
    // 그래프의 간선들을 인접 행렬에 추가
    a[1][2] = 1; a[1][3] = 1; a[3][4] = 1;
    a[2][1] = 1; a[3][1] = 1; a[4][3] = 1;
    
    // 모든 노드를 확인
    for(int i = 0; i < V; i++){
        for(int j = 0; j < V; j++){
            if(a[i][j] && visited[i] == 0){  // 간선이 존재하고, 시작 노드가 방문되지 않았으면
                go(i);  // 그 노드에서 DFS 시작
            }
        }
    }
}

#include<bits/stdc++.h>
using namespace std;
bool visited[10] = {false};
int arr[10] = {0};
int N, M;

void DFS(int n){
    //기저조건
    if(n == M){
        for(int i = 0; i < M; i++){
            cout << arr[i] << ' ';
        }
        cout << '\n';
    }
    return;

    for(int i = 1; i < n; i++){
        if(visited[i] = false){
            visited[i] = true;
            arr[n] = i; 
            DFS(n + 1);
            visited[i] = false;
        }
    }
}
/*
3.2일때
arr[0] dfs(1), visited[]
*/

int main(){
    cin.tie(NULL), cout.tie(NULL);
    cin >> N >> M;
    DFS(0);
    return 0;
}

//n이 3,2일 때
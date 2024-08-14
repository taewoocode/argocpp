#include<bits/stdc++.h>
using namespace std;
const int n = 6;
vector<int> adj[6];
int visited[n];

//u = from, v = to
void dfs(int u){
    visited[n] = 1;
    cout << u << '\n';
    for(auto v : adj[u]){
        if(visited[v] == 0){
            dfs(v);
        } 
    }
    cout << "4로부터 시작된 함수가 종료가 되었습니다.\n";
    return;
}

int main(){
    adj[1].push_back(1);
    adj[1].push_back(2);
    adj[2].push_back(4);
    adj[2].push_back(5);
    adj[4].push_back(2);
    dfs(1);

    return 0;
}
#include<bits/stdc++.h>
using namespace std;
vector<int> adj[4];
int visited[4];
vector<int> v;
void print(){
    for(int i : v){
        cout << char(i + 'A') << " ";
        cout << '\n';
    }
}

void go(int idx){
    //기저 사례
    if(v.size() == 3){
        print();
        return;
    }
    for(int there : adj[idx]){
        if(visited[there]){ //방문한 배열은 다시 방문하지 않는다.
            continue;
        }
        visited[there] = 1;
        v.push_back(there);
        go(there);
        visited[there] = 0;
        v.pop_back();
    }
}
int main(){
    adj[0].push_back(1);
    adj[1].push_back(0);

    adj[1].push_back(2);
    adj[2].push_back(1);

    adj[1].push_back(3);
    adj[3].push_back(1);

    visited[0] = 1;
    v.push_back(0);
    return 0;
}
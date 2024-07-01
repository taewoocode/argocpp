#include<bits/stdc++.h>
using namespace std;
const int V = 10;
vector<int> adj[V];
int visited[V];
int go(int idx){
    cout << idx << '\n';
    visited[idx] = 1;
    for(int there : adj[idx]){
        if(visited[there]){
            continue;
        } else {
             go(there);
        }
    }
    return 0;
} 
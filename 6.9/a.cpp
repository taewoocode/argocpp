#include<bits/stdc++.h>
using namespace std;
const int V = 4;
vector<int> adj[V];
int main(){
    //정점마다 연결되어 있다. 0번은 1,2,3
    //1번은 0,2
    //2번은 0,1
    //3번은 0
    //총 4개의 정점
    adj[0].push_back(1);
    adj[0].push_back(2);
    adj[0].push_back(3);

    adj[1].push_back(0);
    adj[1].push_back(2);

    adj[2].push_back(0);
    adj[2].push_back(1);

    adj[3].push_back(0);

    for(int i = 0; i < 4; i++){
        cout << i << " :: ";
        for(int it : adj[i]){
            cout << it << " ";
        }
        cout << '\n';
    }

    //이렇게도 가능
    for(int i = 0; i < 4; i++){
        cout << i << " :: "; //c++에서 제공하는 범위기반 for문이다.
        for(int j = 0; j < adj[i].size(); j++){
            cout << adj[i][j] << " ";
        }
        cout << '\n';
    }

    return 0;
}
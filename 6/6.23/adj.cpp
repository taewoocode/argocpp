#include<bits/stdc++.h>
using namespace std;
const int n = 4; //4개의 정점 만들기
vector<int> adj[n];
int main(){
    adj[0].push_back(1);
    adj[0].push_back(2);
    adj[0].push_back(3);

    adj[1].push_back(0);
    adj[1].push_back(2);

    adj[2].push_back(0);
    adj[2].push_back(1);

    adj[3].push_back(0);

    //정점순회 -> 연결된 정점 뽑아내기
    for(int i = 0; i < 4; i++){
        //범위기반 for문으로 각 요소 뽑아내기
        //there로 adj의 각 요소들을 순회하면서 뽑아낸다.
        for(int there : adj[i]){
            cout << there << ' ';   
        }
        cout << '\n';
    }
    
    //이러한 방법도 있음
    for(int i = 0; i < 4; i++){
        cout << i << " :: ";
        for(int j = 0; j < adj[i].size(); j++){
            cout<<adj[i][j] << '\n';
        }
        cout << '\n';
    }

    return 0;
}

//인접리스트를 잘 알아야 dfs에대한 이해도가 올라갈 수 있다.





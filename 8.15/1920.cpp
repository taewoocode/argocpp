#include<bits/stdc++.h>
using namespace std;
int n, m;
vector<int> v;
vector<int> v2;
int main(){
    cin.tie(NULL);
    cout.tie(NULL);
    ios::sync_with_stdio(false);
    //각 배열들이 존재하고, 그 수가 존재하면 1 수가 존재하지 않으면 0
    cin >> n >> m;
    v.resize(n);
    v2.resize(m);
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    for(int i = 0; i < m; i++){
        cin >> v[i];
    }
    for(int i = 0; i < v.size(); i++){
        if(find(v2.begin(), v2.end(), v[i]) != v2.end()){
            cout << 1 << '\n';
        } else {
            cout << 0 << '\n';
        }
    }
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
const int n = 3;
int a [3][3] = {

    {10,20,21},
    {70,90,12},
    {80,110,120}

};
int visited[3][3]; //방문처리를 위한 배열
const int dy[] = {-1,0,1,0};
const int dx[] = {0,1,0,-1};
vector<int> v;
void print(){
    for(int i : v){
        cout << i << ' ';
    }
    cout << '\n';
}
void go(int y, int x){
    if(y == n - 1 && x == n - 1){
        print();
        return;
    }
    for(int i = 0; i < 4; i++){
        int ny = y + dy[i];
        int nx = x + dx[i];
        if(ny < 0 || nx < 0 || ny >= n || nx >= n){
            continue;
        }
        if(visited[nx][ny]){
            continue;
        }
        visited[ny][nx] = 1;
        v.push_back(a[ny][nx]);
        go(ny,nx);

        visited[ny][nx] = 0;
        v.pop_back();
    }
}
int main(){
    visited[0][0] = 1; //방문처리
    v.push_back(a[0][0]);
    go(0,0);
    return 0;
}
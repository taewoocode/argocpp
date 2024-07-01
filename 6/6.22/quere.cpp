#include<bits/stdc++.h>
using namespace std;
queue<int> q;
int main(){
    for(int i = 0; i < 10; i++){
        q.push(i);
    }
    while(q.size()){
        cout << q.front() << ' ';
        q.pop();
    }
    return 0;
}
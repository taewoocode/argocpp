#include<bits/stdc++.h>
using namespace std;
int main(){
    queue<int> q;

    q.push(10);
    q.push(20);
    q.push(30);
    cout << q.front() << '\n';

    while(!q.empty()){
        cout << q.front() << '\n';
        q.pop();
    }

    return 0;
}
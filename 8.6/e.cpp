#include<bits/stdc++.h>
using namespace std;
int n = 5, k = 3;

void print(vector<int> b){
    for(int i : b){
        cout << i << ' ';
    }
    cout << '\n';
}
void combi(int start, vector<int> b){
    //재귀조건
    if(b.size() == k){
        print(b);
        return;
    }
    for(int i = start + 1; i < n; i++){
        b.push_back(i);
        combi(i, b);
        b.pop_back();
    }
    return;
}

int main(){
    vector<int> b;
    combi(-1, b);
    return 0;
}
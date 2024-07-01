#include<bits/stdc++.h>
using namespace std;
int n;
vector<int> v;
int main(){
    cin >> n;
    v.resize(n);
    for(int i = 0; i < v.size(); i++){
        v[i] = 1;
    }
    for(auto it : v){
        cout << it;
    }
    return 0;
}
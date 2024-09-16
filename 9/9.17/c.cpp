#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v;
    for(int i = 0 ; i < 5; i++){
        v.push_back(i);
    }
    for(auto i : v){
        cout << i << ' ';
    }
    return 0;
}
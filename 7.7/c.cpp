#include<bits/stdc++.h>
using namespace std;
vector<int> v;
int main(){
    v.push_back(1);
    v.push_back(1);
    v.push_back(1);
    v.push_back(1);
    for(int i = 0; i < v.size(); i++){
        cout << v[i] << '\n';
        cout << &v[i] << '\n';
    }

    return 0;
}
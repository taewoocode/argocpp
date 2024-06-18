#include<bits/stdc++.h>
using namespace std;
vector<tuple<int,int,int>> v;
int main(){
    v.push_back({2,1,4});
    v.push_back({4,1,5});
    v.push_back({6,1,4});
    sort(v.begin(), v.end());
    for(int i = 0; i < v.size(); i++){
        cout << "(" << get<0>(v[i]) << "," << get<1>(v[i]) << "," << get<2>(v[i]) << ")";       
    }
    return 0;
}
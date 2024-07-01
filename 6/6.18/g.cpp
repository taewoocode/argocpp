#include<bits/stdc++.h>
using namespace std;
vector<pair<int,int>> v;
int main(){
    v.push_back({1,2});
    v.push_back({1,3});
    v.push_back({2,5});
    sort(v.begin(), v.end());
    for(int i = 0; i < v.size(); i++){
        cout << "(" << v[i].first << "," << v[i].second << ")";
    }
    return 0;
}
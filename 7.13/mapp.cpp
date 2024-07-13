#include<bits/stdc++.h>
using namespace std;
map<int,string> _map;
int main(){
    _map.insert(make_pair(1,"banana"));
    _map.insert({2,"orange"});
    _map[3] = "Cherry";

    for(auto &it : _map){
        cout << it.first << " : " << it.second << '\n';
    }

}
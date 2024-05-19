#include<bits/stdc++.h>
using namespace std;
map<int, int> mp; //key도 int, value도 int
int main(){
    vector<int> v{1 ,1 ,2 ,2 ,3 ,3};
    for(int i : v){ //순회를 하면서
        if(mp[i]){ //만약 i가 있다면
            continue; //
        }else { //없다면
            mp[i] = 1;
        }
    }
    vector<int> ret;
    for(auto it : mp){
        ret.push_back(it.first);
    }
    for(int i : ret) cout << i << '\n';

}
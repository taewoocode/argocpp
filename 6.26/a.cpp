#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v {1,2,3,4,5};
    for(auto i : v){
        cout << i << '\n';
    }
    map<string,int> mp = {{"apple",1},{"banana",2},{"cherry",3}};
    for(auto i : mp){
        cout << i.first << " = " << i.second << ' ';
    }






    return 0;
}
#include<bits/stdc++.h>
using namespace std;
map<string,int> m;
int main(){
    m["monkey"] = 4;
    m["banana"] = 3;
    m["asd"] = 2;
    cout << m["banana"] << ' ';
    if(m.count("banana")){
        //key exists
    }
    for(auto it : m){
        cout << it.first << " " << it.second << '\n';
    }
    
    return 0;
}
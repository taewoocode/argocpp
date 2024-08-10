#include<bits/stdc++.h>
using namespace std;
int main(){
    //비어있는 map
    map<string, int> m;
    //초기화된 맵
    map<string, int> mymap = {
        {{"apple",1}, {"banana", 2}, {"cherry", 3}}
    };
    //키로 접근하여 값 변경
    mymap["banana"] = 10;
    return 0;
}
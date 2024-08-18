#include<bits/stdc++.h>
using namespace std;
int main(){
    set<int> s {1,3,5,2,9};

    s.insert(8);
    s.erase(2);
    for(auto it : s){
        cout << it << ' ';
    }

    //원소4가 있는지 확인하고 삭제하기
    //4가 있다면 위치를 반환하고, 없으면 반복자를 반환한다.
    auto it = s.find(4);
    if(it != s.end()){
        s.erase(it);
    }





    return 0;
}
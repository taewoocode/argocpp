#include<bits/stdc++.h>
using namespace std;
int main(){
    unordered_set<int> myset;

    //삽입
    myset.insert(1);
    myset.insert(2);
    myset.insert(3);
    myset.insert(4);

    //순회하면서 원소 출력
    for(auto it : myset){
        cout << it << ' ';
    }
    return 0;
}
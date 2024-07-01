#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v {1,2,3,4,5};
    list<int> list {10,20,30,40,50};
    
    //순방향 반복자를 사용
    for(vector<int>::iterator it = v.begin(); it != v.end(); ++it){
        cout << *it << " ";
    }
    cout << '\n';

    cout << "List elements: ";
}
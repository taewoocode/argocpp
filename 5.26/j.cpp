/*
iterator는 컨테이너에 저장되어 있는 요소의 주소를 가리키는 개체를 말하며 포인터를 일반화 한 것이다.
vector, map 등 각각 다르게 구현된 컨테이너들을 일반화한 이터레이터를 통해 쉽게 순회가 가능하다.
배열의 한 요소를 가르킨다. 리스트의 한 노드를 가르킨다. 스택의 한 지점을 가르킨다.
*/

#include <bits/stdc++.h>
using namespace std;
vector<int> v;
int main(){

    for(int i = 0; i < 5; i++){
        v.push_back(i);
    }
    for(int i = 0; i < 5; i++){
        cout << i << "번째 요소" << *(v.begin() + i) << '\n';
        cout << &*(v.begin() + i) << '\n';;
    }
    for(auto it = v.begin(); it != v.end(); it++){
        cout << *it << '\n';
    }

    return 0;
}

#include <bits/stdc++.h>
using namespace std;
//deque 사용 deque는 양쪽에서 삽입과 삭제가 가능한 선형 컨테이너이다.
int main(){
    deque<int> dq;
    //앞쪽에 원소추가
    dq.push_front(1);
    dq.push_front(2);

    //뒤쪽에 원소추가
    dq.push_back(1);
    dq.push_back(2);

    //dq에 첫번재 원소 접근
    cout << "Front element: " << dq.front() << '\n';

    //dq에 마지막 원소 접근
    cout << "Second element: " << dq.back() << '\n';
    
    

    for(auto i : dq){
        cout << i << '\n';
    }
}
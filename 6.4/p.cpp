#include <bits/stdc++.h>
using namespace std;
//deque 사용 deque는 양쪽에서 삽입과 삭제가 가능한 선형 컨테이너이다.
int main(){
    deque<int> dq;
    dq.push_front(1);
    for(auto i : dq){
        cout << i << '\n';
    }
}
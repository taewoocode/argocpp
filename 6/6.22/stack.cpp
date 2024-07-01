#include <iostream>
#include <stack>
#include <string>
using namespace std;

stack<string> stk;

int main() {
    stk.push("엄");
    stk.push("준");
    stk.push("식");
    stk.push("화");
    stk.push("이");
    stk.push("팅");
    
    // 스택이 비어 있지 않은 동안 반복
    while (!stk.empty()) {
        // 스택의 맨 위 요소 출력
        cout << stk.top() << '\n';
        // 스택의 맨 위 요소 제거
        stk.pop();
    }
    
    return 0;
}

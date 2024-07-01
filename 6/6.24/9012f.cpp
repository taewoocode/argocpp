#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        stack<char> stk;   // 각 테스트케이스마다 스택을 초기화
        string s;          // 각 테스트케이스마다 문자열을 입력받음
        cin >> s;          // 문자열을 입력받음
        for(int i = 0; i < s.length(); i++){
            if(stk.empty()){
                stk.push(s[i]);
            } else {
                if(stk.top() == '(' && s[i] == ')'){
                    stk.pop();
                } else {
                    stk.push(s[i]);
                }
            }
        }
        if(stk.empty()){
            cout << "YES" << '\n';
        } else {
            cout << "NO" << '\n';
        }
    }
    return 0;
}

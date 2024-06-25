#include<bits/stdc++.h>
using namespace std;
int main(){
    //한번만 초기화 됨
    int t;
    cin >> t;
    stack<char> stk;
    string s;
    cin >> s;
    while(t--){
        for(int i = 0; i < s.length(); i++){
            if(stk.empty()){
                stk.push(s[i]);
            } else { //stack이 비어있지 않다면 
                if(stk.top() == '(' && s[i] == ')'){ 
                    stk.pop(); //합을 이룬후 제거
                } else { //stack이 비어있다면 ?
                    stk.push(s[i]); //현재 문자열 삽입
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
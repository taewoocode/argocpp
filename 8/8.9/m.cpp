#include<bits/stdc++.h>
using namespace std;
bool solution(string s){
    stack<char> stack;
    for(char c : s){
        if(c == '('){
            stack.push(c);
        } else if(c == ')'){
            if(!stack.empty()){
                //괄호가 비어있다면?
                return false;    
            } else {
                stack.pop();
            }
        }
    }
    return stack.empty();
}
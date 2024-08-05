#include<bits/stdc++.h>
using namespace std;
bool solution(string s){
    stack<char> stack;
    for(char c : s){
        if(c =='('){ //열린 괄호가 나오면 
            stack.push(c);
        } else if(c == ')'){ //열린 괄호가 나오지 않고 닫힌 괄호가 나오면 ?
            if(stack.empty()){
                return false;
            } else {
                stack.pop();
            }
        }
    }
    return stack.empty();
}
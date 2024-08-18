#include<bits/stdc++.h>
using namespace std;
string solution(int demical){
    //2진수를 10진수로 반환
    //2진수를 10진수로 반환하려면 계속 2로 나눠야함
    //stack을 이용해보자.
    stack<int> stack;
    while(demical > 0){
        stack.push(demical % 2);
        demical /= 2;
    }
    string binary = "";
    while(!stack.empty()){
        binary += to_string(stack.top());
        stack.pop();
    }
    return binary;
}
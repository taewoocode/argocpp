#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); // 입출력 속도를 높이기 위해 sync를 false로 설정
    cin.tie(NULL); // 입력 스트림의 묶음을 풀어줌으로써 입력 속도를 높임
    
    int n; // 문자열의 개수를 저장할 변수 선언
    cin >> n; // 문자열의 개수를 입력받음
    
    int ret = 0; // 조건을 만족하는 문자열의 개수를 저장할 변수 선언
    for(int i = 0; i < n; i++){ // n개의 문자열을 처리하기 위한 반복문
        string s;
        cin >> s; // 각 문자열을 입력받음
        stack<char> stk; // 문자들을 저장할 스택 선언
        for(char a : s){ // 문자열의 각 문자를 처리하기 위한 반복문
            if(!stk.empty() && stk.top() == a){ // 스택이 비어있지 않고, 스택의 top과 현재 문자가 같다면
                stk.pop(); // 스택에서 문자를 제거
            } else {
                stk.push(a); // 스택에 현재 문자를 추가
            }
        }
        if(stk.empty()){ // 문자열 처리가 끝난 후 스택이 비어있다면
            ret++; // 조건을 만족하는 문자열 개수를 증가시킴
        }
    }
    
    cout << ret << '\n'; // 조건을 만족하는 문자열의 개수를 출력
    return 0;
}

//짝짓기, 폭발 -> stack을 사용해야 하는 문제이지 않을까?
#include<bits/stdc++.h>

using namespace std;

string solution(string s) {
    string answer = "";
    //문자열엔 공백이 포함되어 있다.

    bool a = false; // 단어가 안에 있으면 true, 없으면 false;
    for(auto c : s){
        //문자열을 순회하면서 여전히 공백이면 false
        if(c == ' '){
            answer += ' ';
            a = false;
            //만약 문자열이 공백이 아니라면 true;
        } else if(!a){
            //대문자
            answer += toupper(c);
            a += true;
            //위 조건이 다 아니라면?
        } else {
            answer += tolower(c);
        }
    }
    return answer;
}

int main(){
    string s;
    cout << "입력하세요." ;
    getline(cin, s);
    string result = solution(s);
    cout << result << '\n';
}
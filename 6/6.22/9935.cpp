#include <bits/stdc++.h>
using namespace std;

int main(){
    string S, T, ret;
    cin >> S >> T;

    for(char a : S){
        ret.push_back(a); // 현재 문자를 ret에 추가
        // ret의 끝부분이 T와 일치하는지 확인
        if(ret.size() >= T.size() && ret.substr(ret.size() - T.size(), T.size()) == T){
            ret.erase(ret.end() - T.size(), ret.end()); // 마지막 T.size() 문자를 제거
        }
    }
    if(ret.empty()){
        cout << "FRULA" << '\n';
    } else {
        cout << ret << '\n';
    }

    return 0;
}

#include<bits/stdc++.h>
using namespace std;

// 함수 정의: 가위바위보 게임에서 각 입력에 대해 승리하는 수를 반환하는 함수
string solution(string rsp) {
    string answer = "";  // 정답을 저장할 빈 문자열 초기화

    // rsp 문자열의 각 문자를 순회하는 for 루프
    for(int i = 0; i < rsp.length(); i++){
        // 현재 문자가 '2'인 경우
        if(rsp[i] == '2'){
            answer += '0';  // '2'를 이길 수 있는 '0'을 정답 문자열에 추가
        }
        // 현재 문자가 '0'인 경우
        else if(rsp[i] == '0'){
            answer += '5';  // '0'을 이길 수 있는 '5'를 정답 문자열에 추가
        }
        // 그 외의 경우 (현재 문자가 '5'인 경우)
        else {
            answer += '2';  // '5'를 이길 수 있는 '2'를 정답 문자열에 추가
        }
    }
    return answer;  // 최종적으로 완성된 정답 문자열 반환
}

int main() {
    // 테스트 케이스
    cout << solution("205") << endl; // 예: "052" 출력 기대
    return 0;
}


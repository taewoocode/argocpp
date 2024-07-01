#include <string>
#include <vector>

using namespace std;

// 주어진 문자열에서 모음을 제거하는 함수
string solution(string my_string) {
    string answer = "";  // 결과 문자열을 저장할 빈 문자열 초기화
    vector<char> vowels = {'a', 'e', 'i', 'o', 'u'};  // 모음을 저장한 벡터 초기화
    
    // 입력 문자열의 각 문자를 순회
    for (char c : my_string) {
        bool isVowel = false;  // 현재 문자가 모음인지 여부를 나타내는 플래그 변수 초기화
        // 모음 벡터를 순회하며 현재 문자가 모음인지 확인
        for (char v : vowels) {
            if (c == v) {  // 현재 문자가 모음 벡터에 존재하면
                isVowel = true;  // 플래그 변수를 true로 설정
                break;  // 모음 여부를 확인했으므로 더 이상 검사할 필요 없음
            }
        }
        // 현재 문자가 모음이 아니면 결과 문자열에 추가
        if (!isVowel) {
            answer += c;
        }
    }
    
    return answer;  // 모음을 제거한 결과 문자열 반환
}
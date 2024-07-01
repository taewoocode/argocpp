#include <string>
#include <vector>
#include <algorithm>

using namespace std;

// 주어진 문자열에서 모음을 제거하는 함수
string solution(string my_string) {
    string answer = "";  // 결과 문자열을 저장할 빈 문자열 초기화
    vector<char> vowels = {'a', 'e', 'i', 'o', 'u'};  // 모음을 저장한 벡터 초기화
    
    // 입력 문자열의 각 문자를 순회
    for (char c : my_string) {
        // 현재 문자가 모음 벡터에 존재하지 않으면 결과 문자열에 추가
        if (find(vowels.begin(), vowels.end(), c) == vowels.end()) {
            answer += c;
        }
    }
    
    return answer;  // 모음을 제거한 결과 문자열 반환
}
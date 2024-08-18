#include <string>
#include <vector>

using namespace std;

int solution(vector<string> babbling) {
    int answer = 0;

    for (int i = 0; i < babbling.size(); i++) {
        string temp1 = "";
        string temp2 = "";
        
        for (char c : babbling[i]) {
            temp1 += c; // 현재 문자 추가
            
            // temp1이 유효한 패턴인지 확인
            if (temp1 == "aya" || temp1 == "ye" || temp1 == "woo" || temp1 == "ma") {
                if (temp2 == temp1) {
                    // 연속된 패턴이 발견된 경우
                    break; // 루프 종료
                } else {
                    // 이전 패턴과 다를 경우
                    temp2 = temp1; // 이전 패턴 업데이트
                    temp1 = ""; // temp1 초기화
                }
            }
        }   
        // 문자열이 유효한 패턴으로만 구성된 경우
        if (temp1.size() == 0) {
            answer++;
        }
    }
    return answer;
}
#include <string>
#include <vector>

using namespace std;

int solution(vector<string> babbling) {
    int answer = 0;

    for(int i;i<babbling.size();i++)
    {
        string temp1="";
        string temp2="";
        for(char c:babbling[i])
        {
            temp1+=c;
            if(temp1 == "aya"||temp1 == "ye"||temp1 == "woo"||temp1 == "ma")
            {
                if(temp2 == temp1) break;
                temp2=temp1;
                temp1="";
            }
        }
        if(temp1.size()==0) answer++;
    }
    return answer;
}
#include <string>
#include <vector>

using namespace std;

string solution(int a, int b) {
    string answer = "";
    vector<string> v {"FRI","SAT","SUN","MON","TUE","WED","THU"};
    vector<int> v2 {31,29,31,30,31,30,31,31,30,31,30,31};
    
    int sum = 0;
    //윤년이기 때문에 2월은 29일이어야함.
    //해당 날짜까지 몇개월이 지났는지?
    for(int i = 0; i < a - 1; i++){
        sum += v2[i];
    }
    //해당 월 기준 몇일이 흘렀는지
    sum += b - 1;
    return answer = v[sum % 7];
}
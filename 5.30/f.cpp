#include <bits/stdc++.h>
using namespace std;

int solution(string my_string) {
    int answer = 0;
    for(int i = 0; my_string.length(); i++){
        if(my_string[i] > 0 && my_string[i] < 9){
            answer += my_string[i];
        }
    }
    return answer;
}

int main(){
    int result = solution("aAb1B2cC34oOp");
    cout << result << ' ';
}
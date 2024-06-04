#include<bits/stdc++.h>
using namespace std;
string solution(string my_string, int k){

    string answer = "";
    for(int i = 0; i < k; i++){
        answer += my_string;
    }
    return answer;
}

int main(){
    string result = solution("string", 3);
    cout << result << '\n';
    return 0;
}
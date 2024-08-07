#include<bits/stdc++.h>
using namespace std;
string solution(int num){
    string answer = "";
    if(num % 2 == 0) answer = "Even";
    else answer = "Odd";
    return answer;
}

string solution(int num){
    return num % 2 ? "Odd" : "Even";
}

/*
C++에서 정수형 변수의 경우, 0이 아닌 모든 값은 참(true)으로 간주됩니다. 따라서 조건 num % 2에서 num % 2의 결과가 0이 아닌 경우에는 참(true)이 되며, 0인 경우에는 거짓(false)이 됩니다.

여기서 num % 2는 나머지 연산을 의미합니다. 정수 num이 홀수인 경우 num % 2의 결과는 1이 됩니다. 즉, 홀수일 때 나머지가 1이므로 num % 2의 값은 1이 되어 참(true)이 됩니다.

반면, 정수 num이 짝수인 경우 num % 2의 결과는 0이 됩니다. 즉, 짝수일 때 나머지가 0이므로 num % 2의 값은 0이 되어 거짓(false)이 됩니다.

따라서 return num % 2 ? "Odd" : "Even";에서:

num % 2가 1(참)이면 "Odd"를 반환합니다.
num % 2가 0(거짓)이면 "Even"을 반환합니다.
*/

double solution(vector<int> arr){
    double answer = 0;
    double sum = 0;
    for(int i = 0; i < arr.size(); i++){
        sum += arr[i];
    }
    sum = sum / arr.size();
    answer = sum;
    return answer;
}

bool solution3(int x) {
    bool answer = true;
    string s = to_string(x);
    int sum = 0;
    for(auto i : s){
        sum += i - '0';
    }
    if(x % sum == 0) answer = true;
    else answer = false;
    return answer;
}

int solution4(int n){
    int answer = 0;
    for(int x = 0; x < n; x++){
        if(n % x == 1){
            answer = x;
            break;
        }
    }
    return answer;
}

long long solution(int price, int money)

/*


*/
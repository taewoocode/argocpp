#include <bits/stdc++.h>
using namespace std;
int main(int a, int b){
    int answer = 0;

    string A = to_string(a); // int를 string으로 변환해주는 to_string
    string B = to_string(b);

    if(stoi(A + B) >= 2 * a * b) {
        answer = stoi(A + B); //string을 int로 변환
    } else {
        answer = 2 * a * b;
    }
    return answer;

}
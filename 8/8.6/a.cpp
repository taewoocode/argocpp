#include<bits/stdc++.h>
using namespace std;
vector<int> v;
int p = 0;

int solution(int n) {
    int answer = 0;
    //3진법으로 뒤집는다. 3진법은 3으로 나눈다.
    while(n > 0){
        v.push_back(n % 3);
        n /= 3;
    }
    
    //뒤집어서 각 자릿수 제곱수 곱해주기
    for(int i = v.size() - 1; i >= 0; i--){
        answer += v[i] * pow(3,p);
        p++;
    }
    
    return answer;
}
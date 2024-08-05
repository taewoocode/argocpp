#include<bits/stdc++.h>
using namespace std;
long long solution(long long n) {
    long long answer = 0;
    long long s = sqrt(n);
    if(s * s == n){
        answer = pow(s + 1, 2);
    } else {
        return -1;
    }
    return answer;
}
//pow(2,3)이라면 2의 3승이 된다.
//4의 제곱근은 +-2
//ex) sqrt(4) = 2이다.
//sqrt는 제곱근을 반환한다.

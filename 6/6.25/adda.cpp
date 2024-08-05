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
#include<bits/stdc++.h>
using namespace std;
int main(long long n){
    long long answer = 0;
    long long  a = sqrt(n);
    if(a * a == n){
        answer = pow(a + 1, 2);
    } else {
        answer = -1;
    }
    return answer;

    //제곱근이란 제곱해서 a가 되는 수를 말한다. 루트를 의미한다.
    
}
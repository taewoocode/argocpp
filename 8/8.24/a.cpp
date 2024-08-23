#include<bits/stdc++.h>
using namespace std;

int solution(int n) {
    int answer = 0;
    int sqrt_n = sqrt(n);
    if(sqrt_n * sqrt_n == n){
        return 1;
    } else {
        return 2;
    }
    return 0;
}
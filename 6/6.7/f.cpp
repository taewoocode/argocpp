#include<bits/stdc++.h>
using namespace std;
int main(int n){
    int answer = 0;
    for(int i = 1; i <= 12; i++){
        if(n % i == 0){
            answer += i;
        }
    }
    return answer;
}
#include<bits/stdc++.h>
using namespace std;
int main(int a, int b, bool flag){
    int answer = 0;
    if(flag == true){
        answer = a + b;
    } else {
        answer = a - b;
    }
    return answer;
}
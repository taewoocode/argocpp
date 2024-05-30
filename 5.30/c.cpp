#include <bits/stdc++.h>
using namespace std;
int main(int hp){
    int answer = 0;
    answer += hp / 5;
    hp %= 5;

    answer += hp / 3;
    hp %= 3;
    
    answer += hp;

    return answer;

}
#include<bits/stdc++.h>
using namespace std;

int solution(vector<int> number) {
    int answer = 0;
    //0을 만들어서 삼총사를 만든다
    for(int i = 0; i < number.size() - 2; i++){
        for(int j = i + 1; j < number.size() - 1; j++){
            for(int k = j + 1; k < number.size(); k++){
                if(number[i] + number[j] + number[k] == 0){
                    answer++;
                }
            }
        }
    }
    
    return answer;
}


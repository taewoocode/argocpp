#include<bits/stdc++.h>
using namespace std;
int solution(int n, string control){
    string control {'w','s','d','a'};
    int answer = 0;
    for(int i = 0; i < control.size(); i++){
        if(control[i] == 'w') answer += 1;
        else if(control[i] == 's') answer -= 1;
        else if(control[i] == 'd') answer += 10;
        else if(control[i] == 'a') answer -= 10;
    }
    return answer;
}
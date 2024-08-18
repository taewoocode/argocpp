#include<bits/stdc++.h>
using namespace std;

vector<int> solution(vector<int> arr) 
{
    vector<int> answer;

    answer.push_back(arr[0]);
    
    for(int i = 1; i < arr.size(); i++){
        //반복되는 원소를 제거해야함
        if(arr[i] != arr[i - 1]){
            answer.push_back(arr[i]);
        }
    }
    return answer;
}
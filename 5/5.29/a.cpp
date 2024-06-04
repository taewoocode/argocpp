#include<bits/stdc++.h>
using namespace std;
int solution(vector<int> array, vector<vector<int>> commands){
    vector<int> answer;
    for(int i = 0; i < commands.size(); i++){
        vector<int> v;
        for(int j = commands[i][0] - 1; j <= commands[i][1] - 1; j++){ //int j = 1 ~ 4, -1을 해주는 이유는 index를 1부터 시작해주기 위함.
            v.push_back(array[j]); // array[1],[2],[3],[4] -> 4개의 array인덱스가 벡터 v에 저장됨 -> 5,2,6,3
        }
        sort(v.begin(), v.end()); // 벡터 v를 정렬하여 -> 2,5,6,3이 됨
        answer.push_back(v[commands[i][2] - 1]); //answer에 저장 
    }
    return 0;
}
//array [1,5,2,6,3,7,4]
//commands [[2,5,3], [4,4,1], [1,7,3]]
/*
commands[0][0] - 1, commands[0][1] - 1; j++
*/
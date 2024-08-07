#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> solution(vector<vector<int>> arr1, vector<vector<int>> arr2){
    vector<vector<int>> answer(arr1.size(), vector<int>(arr1[0].size(), 0)); //크기, 0으로 초기화asd
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    for(int i = 0; i < arr1.size(); i++){
        vector<int> temp;
        for(int j = 0; j < arr1[i].size(); j++){
            answer[i][j] = arr1[i][j] + arr2[i][j];
        }
    }
    return answer;
}
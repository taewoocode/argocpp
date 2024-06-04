// 순서 바꾸기

#include<bits/stdc++.h>
using namespace std;
vector<int> solution(vector<int> num_list, int n){
    vector<int> answer;
    for(int i = n; i < num_list.size(); i++){
        answer.push_back(num_list[i]);
    }
    for(int j = 0; j < n; j++){
            answer.push_back(num_list[j]);
        }
    return answer;
}

int main(){
    //1번째 테스트 케이스
    vector<int> test1 {1,6,2};
    int n1 = 1;
    vector<int> result = solution(test1, n1);
    for(auto i : result){
        cout << i << ' ';
    }
    return 0;
}
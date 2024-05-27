/*
n개의 간격의 원소
만약 2개의 간격의 원소가 주어지면 ? -> (4,2)에서 하나 뽑고, (6,1)에서 하나 뽑고, (7,6)에서 -> 4,6,7 출력


i가 0일때 동작 : answer에다가 num_list 0번째 인덱스를 추가  4
i가 2일때 동작 : answer에다가 num_list 2번째 인덱스를 추가  6 
i가 4일때 동작 : answer에다가 num_list 4번째 인덱스를 추가  7
*/

// 4 2 6 1 7 6 / 2  / 4 6 7 



#include <bits/stdc++.h>
using namespace std;
vector<int> solution(vector<int> num_list, int n){
    vector<int> answer;
    for(int i = 0; i < num_list.size(); i+=n){
        answer.push_back(num_list[i]);
    }
    return answer;
}

int main(){
    vector<int> test1 {4,2,6,1,7,6};
    int n1 = 2;
    vector<int> result = solution(test1, n1);
    for(int i : result){
        cout << i << ' ';
    }
    return 0;
}

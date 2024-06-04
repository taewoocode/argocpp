#include<bits/stdc++.h>
using namespace std;
vector<int> solution(vector<int> num_list, int n){
    vector<int> answer;
    for(int i = n - 1; i < num_list.size(); i++){
        answer.push_back(num_list[i]);
    }
    return answer;
}

int main(){
    vector<int> v {5,2,1,7,5};
    int n1 = 2;
    vector<int> test = solution(v, n1);
    for(int i : test){
        cout << i << ' ';
    }
    return 0;
}
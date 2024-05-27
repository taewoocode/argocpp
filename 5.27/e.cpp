#include <bits/stdc++.h>
using namespace std;
vector<int> solution(vector<int> num_list, int n){
    vector<int> answer;
    for(int i = 0; i < n; i++){
        answer.push_back(num_list[i]);
    }
    return answer;
}

int main(){
    //test case1 
    vector<int> test1 = {2,1,6};
    int n1 =1;
    vector<int> result = solution(test1, n1);
    for(auto i : result){
        cout << i << ' ';
    }
}

#include <bits/stdc++.h>
using namespace std;
int solution(vector<int> num_list){
    int answer;

    if(num_list.size() >= 11){
        answer = 0;
        for(int i = 0; i < num_list.size(); i++){
            answer += num_list[i];
        }
    }else{
        answer = 1;
        for(int i = 0; i < num_list.size(); i++){
            answer *= num_list[i];
        }
    }
    return answer;
}

int main(){
    vector<int> list {3, 4, 5, 2, 5, 4, 6, 7, 3, 7, 2, 2, 1};
    int result = solution(list);
    cout << "result: " << result << '\n';
    return 0;
}


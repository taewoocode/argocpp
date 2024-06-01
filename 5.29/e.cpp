#include <bits/stdc++.h>
using namespace std;
vector<int> solution(int money){
    vector<int> answer;
    answer.push_back(money / 5500); //1
    answer.push_back(money % 5500); //0

    return answer;
}

int main(){
    vector<int> money = solution(5500);
    for(auto i : money){
        cout << i << ' ';
    }

    return 0;
}
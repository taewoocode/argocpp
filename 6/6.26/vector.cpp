#include<bits/stdc++.h>
using namespace std;
vector<int> solution(vector<int> numbers){
    //중복을 허용하지 않음
    set<int> sum;
    //numbers의 사이즈 만큼 돌면서 인덱스를 하나씩 골라서 set에다가 담아줘야함.
    for(int i = 0; i < numbers.size(); i++){
        for(int j = i + 1; j < numbers.size(); j++){
            sum.insert(numbers[i] + numbers[j]);
        }
    }
    vector<int> answer(sum.begin(), sum.end());
    return answer;
}

#include<bits/stdc++.h>
using namespace std;

vector<int> solution(vector<int> numbers) {
    vector<int> answer;
    //중복을 허용하지 않는 자료구조를 선정해야함
    set<int> sum;
    for(int i = 0; i < numbers.size(); i++){
        for(int j = i + 1; j < numbers.size(); j++){
            sum.insert(numbers[i] + numbers[j]);
        }
    }
    vector<int> answer(sum.begin(), sum.end());
    return answer;
}

#include<bits/stdc++.h>
using namespace std;

vector<int> solution(vector<int> numbers) {
    vector<int> answer;
    //중복을 허용하지 않는 자료구조를 선정해야함
    set<int> sum;
    for(int i = 0; i < numbers.size(); i++){
        for(int j = i + 1; j < numbers.size(); j++){
            sum.insert(numbers[i] + numbers[j]);
        }
    }
    //컨테이너들의 각 요소들을 value로 순회하면서 answer에다가 값을 push해주기
    for(auto value : sum){
        answer.push_back(value);
    }
    return answer;
}
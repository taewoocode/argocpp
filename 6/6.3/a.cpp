#include <bits/stdc++.h>
using namespace std;
vector<int> main(int n, vector<int> numlist){
    vector<int> answer;
    for(int i = 0; i < numlist.size(); i++){
        if(numlist[i] % n == 0 ){
            answer.push_back(numlist[i]); // answer 배열에 numlist요소를 저장
        }
    }
    return answer;
}
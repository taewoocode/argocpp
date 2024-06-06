#include<bits/stdc++.h>
using namespace std;
vector<int> main(int n, int k){
    vector<int> answer;
    for(int i = 1; i <= n; i++){
        if(i % k == 0){
            answer.push_back(i);
        }
    }
    return answer;
}
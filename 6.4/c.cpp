#include<bits/stdc++.h>
using namespace std;
vector<int> main(vector<int> num_list){
    vector<int> answer;
    int even = 0, odd = 0;
    for(int i = 0; i < num_list.size(); i++){
        if(num_list[i] % 2 == 0){
            even++;
        } else {
            odd++;
        }
    }
    answer.push_back(even);
    answer.push_back(odd);
}